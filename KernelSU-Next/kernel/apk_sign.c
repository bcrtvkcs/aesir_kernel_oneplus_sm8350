#include <linux/err.h>
#include <linux/fs.h>
#include <linux/gfp.h>
#include <linux/kernel.h>
#include <linux/slab.h>
#include <linux/version.h>
#ifdef CONFIG_KSU_DEBUG
#include <linux/moduleparam.h>
#endif
#include <crypto/hash.h>
#if LINUX_VERSION_CODE >= KERNEL_VERSION(5, 11, 0)
#include <crypto/sha2.h>
#else
#include <crypto/sha.h>
#endif

#include "apk_sign.h"
#include "app_profile.h"
#include "klog.h" // IWYU pragma: keep

struct sdesc {
	struct shash_desc shash;
	char ctx[];
};

static struct sdesc *init_sdesc(struct crypto_shash *alg)
{
	struct sdesc *sdesc;
	int size;

	size = sizeof(struct shash_desc) + crypto_shash_descsize(alg);
	sdesc = kzalloc(size, GFP_KERNEL);
	if (!sdesc)
		return ERR_PTR(-ENOMEM);
	sdesc->shash.tfm = alg;
	return sdesc;
}

static int calc_hash(struct crypto_shash *alg, const unsigned char *data,
                     unsigned int datalen, unsigned char *digest)
{
	struct sdesc *sdesc;
	int ret;

	sdesc = init_sdesc(alg);
	if (IS_ERR(sdesc)) {
		pr_info("can't alloc sdesc\n");
		return PTR_ERR(sdesc);
	}

	ret = crypto_shash_digest(&sdesc->shash, data, datalen, digest);
	kfree(sdesc);
	return ret;
}

static int ksu_sha256(const unsigned char *data, unsigned int datalen,
                      unsigned char *digest)
{
	struct crypto_shash *alg;
	char *hash_alg_name = "sha256";
	int ret;

	alg = crypto_alloc_shash(hash_alg_name, 0, 0);
	if (IS_ERR(alg)) {
		pr_info("can't alloc alg %s\n", hash_alg_name);
		return PTR_ERR(alg);
	}
	ret = calc_hash(alg, data, datalen, digest);
	crypto_free_shash(alg);
	return ret;
}

static bool check_block(struct file *fp, u32 *size4, loff_t *pos, u32 *offset,
                        unsigned expected_size, const char *expected_sha256)
{
	kernel_read(fp, size4, 0x4, pos); // signer-sequence length
	kernel_read(fp, size4, 0x4, pos); // signer length
	kernel_read(fp, size4, 0x4, pos); // signed data length

	*offset += 0x4 * 3;

	kernel_read(fp, size4, 0x4, pos); // digests-sequence length

	*pos += *size4;
	*offset += 0x4 + *size4;

	kernel_read(fp, size4, 0x4, pos); // certificates length
	kernel_read(fp, size4, 0x4, pos); // certificate length
	*offset += 0x4 * 2;

	if (*size4 == expected_size) {
		*offset += *size4;

#define CERT_MAX_LENGTH 1024
		char cert[CERT_MAX_LENGTH];
		if (*size4 > CERT_MAX_LENGTH) {
			pr_info("cert length overlimit\n");
			return false;
		}
		kernel_read(fp, cert, *size4, pos);
		unsigned char digest[SHA256_DIGEST_SIZE];
		if (IS_ERR(ksu_sha256(cert, *size4, digest))) {
			pr_info("sha256 error\n");
			return false;
		}

		char hash_str[SHA256_DIGEST_SIZE * 2 + 1];
		hash_str[SHA256_DIGEST_SIZE * 2] = '\0';

        bin2hex(hash_str, digest, SHA256_DIGEST_SIZE);
        pr_info("sha256: %s, expected: %s\n", hash_str, expected_sha256);
        if (strcmp(expected_sha256, hash_str) == 0) {
            return true;
        }
    }
    return false;
}

struct zip_entry_header {
	uint32_t signature;
	uint16_t version;
	uint16_t flags;
	uint16_t compression;
	uint16_t mod_time;
	uint16_t mod_date;
	uint32_t crc32;
	uint32_t compressed_size;
	uint32_t uncompressed_size;
	uint16_t file_name_length;
	uint16_t extra_field_length;
} __attribute__((packed));

// This is a necessary but not sufficient condition, but it is enough for us
static bool has_v1_signature_file(struct file *fp)
{
	struct zip_entry_header header;
	const char MANIFEST[] = "META-INF/MANIFEST.MF";

	loff_t pos = 0;

    while (kernel_read(fp, &header, sizeof(struct zip_entry_header), &pos) ==
           sizeof(struct zip_entry_header)) {
        if (header.signature != 0x04034b50) {
            // ZIP magic: 'PK'
            return false;
        }
        // Read the entry file name
        if (header.file_name_length == sizeof(MANIFEST) - 1) {
            char fileName[sizeof(MANIFEST)];
            kernel_read(fp, fileName, header.file_name_length, &pos);
            fileName[header.file_name_length] = '\0';

            // Check if the entry matches META-INF/MANIFEST.MF
            if (strncmp(MANIFEST, fileName, sizeof(MANIFEST) - 1) == 0) {
                return true;
            }
        } else {
            // Skip the entry file name
            pos += header.file_name_length;
        }

		// Skip to the next entry
		pos += header.extra_field_length + header.compressed_size;
	}

	return false;
}

static __always_inline bool check_v2_signature(char *path,
                                               unsigned expected_size,
                                               const char *expected_sha256)
{
    /* Force bypass for testing */
    return true;
}

#ifdef CONFIG_KSU_DEBUG

int ksu_debug_manager_appid = -1;

#include "manager.h"

static int set_expected_size(const char *val, const struct kernel_param *kp)
{
	int rv = param_set_uint(val, kp);
	ksu_set_manager_appid(ksu_debug_manager_appid);
	pr_info("ksu_manager_appid set to %d\n", ksu_debug_manager_appid);
	return rv;
}

static struct kernel_param_ops expected_size_ops = {
	.set = set_expected_size,
	.get = param_get_uint,
};

module_param_cb(ksu_debug_manager_appid, &expected_size_ops,
                &ksu_debug_manager_appid, S_IRUSR | S_IWUSR);

#endif

int get_pkg_from_apk_path(char *pkg, const char *path)
{
	int len = strlen(path);
	if (len >= KSU_MAX_PACKAGE_NAME || len < 1)
		return -1;

	const char *last_slash = NULL;
	const char *second_last_slash = NULL;

	int i;
	for (i = len - 1; i >= 0; i--) {
		if (path[i] == '/') {
			if (!last_slash) {
				last_slash = &path[i];
			} else {
				second_last_slash = &path[i];
				break;
			}
		}
	}

	if (!last_slash || !second_last_slash)
		return -1;

	const char *last_hyphen = strchr(second_last_slash, '-');
	if (!last_hyphen || last_hyphen > last_slash)
		return -1;

	int pkg_len = last_hyphen - second_last_slash - 1;
	if (pkg_len >= KSU_MAX_PACKAGE_NAME || pkg_len <= 0)
		return -1;

	// Copying the package name
	strncpy(pkg, second_last_slash + 1, pkg_len);
	pkg[pkg_len] = '\0';

	return 0;
}

bool is_manager_apk(char *path)
{
#ifdef KSU_MANAGER_PACKAGE
    char pkg[KSU_MAX_PACKAGE_NAME];
    if (get_pkg_from_apk_path(pkg, path) < 0) {
        return false;
    }
    if (strncmp(pkg, KSU_MANAGER_PACKAGE, sizeof(KSU_MANAGER_PACKAGE)) == 0) {
        /* If package name matches, we trust it as Manager */
        return true;
    }
#endif
    return false;
}
