#ifndef __KSU_H_KSU
#define __KSU_H_KSU

#include <linux/types.h>
#include <linux/workqueue.h>
#include <linux/cred.h>

/*
 * KernelSU-Next version - single source of truth.
 * Defined here (not in Kbuild ccflags) so that gcc header dependency
 * tracking forces recompilation of all consumers on dirty builds.
 * Update KSU_GIT_VERSION when syncing with upstream.
 */
#define KSU_GIT_VERSION 3014
#define KERNEL_SU_VERSION (30000 + KSU_GIT_VERSION)
#define KERNEL_SU_VERSION_TAG "v3.0.1"

#define EVENT_POST_FS_DATA 1
#define EVENT_BOOT_COMPLETED 2
#define EVENT_MODULE_MOUNTED 3

static inline int startswith(char *s, char *prefix)
{
	return strncmp(s, prefix, strlen(prefix));
}

static inline int endswith(const char *s, const char *t)
{
	size_t slen = strlen(s);
	size_t tlen = strlen(t);
	if (tlen > slen)
		return 1;
	return strcmp(s + slen - tlen, t);
}

extern struct cred *ksu_cred;

#endif
