# `v2.0.0` What's New?
- **Huge refactor**: kernel source rebuilt from ground up with comprehensive performance and scheduler optimizations
- BORE (Burst-Oriented Response Enhancer) Scheduler v5.1.0 integrated with WALT coexistence
- uclamp EAS Integration backported from Linux 5.15 (util_fits_cpu, asym_fits_cpu, iowait fix)
- SM8350-specific compiler optimizations (-march=armv8.2-a+crypto+rcpc, -mtune=cortex-x1)
- SuSFS: SRCU for SUS_PATH, kstat spoofing fixes for hosts bind mount, proc_namespace mount hiding fixes
- KernelSU-Next submodule updated
- SuSFS updated from latest commits
- ROM-side changes. Here's is the [rom changelog](https://crdroid.net/lemonadep/12#changelog)

Commits: [f9c8696](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/f9c86967edfff2663646c8d25d556ce35c71978a) [c639b3b](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/c639b3b723b863261388f5a383a26623d8f1112a) [bcd72d5](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/bcd72d57d9978feb0df480f4848e9ea6f304ded6) [9bf4eda](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/9bf4eda3cd86b87261ed168907113a5a77487fa2) [835551b](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/835551b6332bddb3bd6491e31e8dbede921f858a) [9e005c3](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/9e005c38a489d205258678af73a83a3fa2487da2) [1f937e5](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/1f937e569f5d1c8107b326157c664ec19260cd9d) [3c94775](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/3c94775bc349fa88b75206eaf8faf51a2f546c67) [c10d7c3](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/c10d7c34c85b5d9b7befd01751e14b77f1f44dbb) [420b04f](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/420b04f78b7dc659c90f6303db518bb8b138c076) [db10f27](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/db10f2739d29f2415397d3d64245dcab4f44bf77) [e98168d](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/e98168de1d3c178eb470cb08ef5a2ac17d5061f2) [58e5b56](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/58e5b569b1c41cb28537c97f5b49d404530122da) [7d590b8](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/7d590b8e495f4babdf898f963fdf222c8d8d3bd8) [3a9534d](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/3a9534d923697ee97e7c6c4217d63d2ca47a6ee0) [fd73367](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/fd73367d13555d611d8c094a285f854843f795c3) [6746df3](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/6746df3be1585d6dc05aea0df05e741b889e7efe) [3fd9022](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/3fd902219f5e217d616a5cfde9acb33f5550e1ae) [007d2b0](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/007d2b0a952847ec2f20bfc295ab701087aeeeb0) [f010e72](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/f010e72195047dade1ea514dc97c2f9fe5ce40ca) [875a814](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/875a814dc38ef44210a5ab01105993a570641052) [dd97130](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/dd971300bfb7eec65667909165d9e1de363c4888) [2a821f1](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/2a821f1bbd63192273439e79ec2d4cf6bc343684) [bcc1bfa](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/bcc1bfa3bd08c6cc9475ee3a7233800f015bb0f6) [0efd291](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/0efd291dd6db3c8e769d448b3dc875b301057e17) [7390ef2](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/7390ef2c4e4486790a16c0c7e46fd5ec0f01f316) [dcf42f4](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/dcf42f4da3eb7207c6061a1aab19427adf117307) [9727e76](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/9727e768467c1b42a2bea01ffb70dd2d65ed996d) [46a13eb](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/46a13ebe92987075590fe1368fceb709b8317cb6) [162b294](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/162b294ad56dc21cc86b7ceba93eecbc47e7bce0) [63fcff0](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/63fcff09083d379ae71986b4afa1f1c59960fa6d) [5381ef5](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/5381ef5b6c642c9b90a84011eff2cb2d2771e932) [3e54835](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/3e548350b77a5bae404a28b0976ac7f40976a6f7) [7467505](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/74675050bb5f97e31bf0103acaf26ed3790a20ef) [f04c8ec](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/f04c8ec62365505d77bbf5dc82f02adac620263f) [8863d21](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/8863d21022184bc5970085f8bb6d1f85fe8facf6) [ee14c2a](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/ee14c2a46bbe88c6a3682d777b3b5595e04ec4c8) [f2d25e4](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/f2d25e4341f96b39f3c0ee19ac462b76502c0ea5) [0614aa8](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/0614aa89aea454ed91879f1bc975808256d3e167) [70d7c63](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/70d7c6352c7c8d1e8ac9fd13860c03c0ecab83cc) [4f94eb2](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/4f94eb25bcd7d98435b98704089216ceddfe02e3) [7afdec1](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/7afdec129250cfc5bcef6eb4ecc38a10d45987c7) [77e7ecb](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/77e7ecbebc4e153fb3053e3e2b8df67ffb94a191) [5d7805b](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/5d7805b8e208b65b1f3d28490e8f71cebbee1183) [8c7224f](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/8c7224f6dd20d1a996b1305f2e943212c8022b15) [6d1c9e2](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/6d1c9e226bd8a0d9932d562ffa2c5e076a630f76) [c589578](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/c589578c4920f7c0195bf87dac2a5096486be15c) [203aa28](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/203aa28add1d0bc79ed38e332627243faca1cfac) [93d310e](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/93d310eec48b5d11897fa4352ef735314a2f1ce8) [ecc807a](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/ecc807afbb9355739d236239bb7c2d66499b55fb) [31f98d7](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/31f98d7ca6c6f9fdc5aa7d88251ba1a7c45e7aea) [c4cdeb0](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/c4cdeb060ae2854fa3be71569c08e1efe9a7d755) [76ce25c](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/76ce25c4ef8df7126211ff171ae9bd36daf62c7a) [e5cb98b](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/e5cb98bcd20aa44619c067f1bd0e8bd85c911afa) [2be6d06](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/2be6d06c65e4865c2ebd2bc7dc76300cfe2eeb29) [3e652cf](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/3e652cf644fe757537a2ca8108b28714320bb699) [adee63c](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/adee63c7cd08f0c7eb58902b93bc92734395301c) [2dcf59c](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/2dcf59c458c065367a0e0308fa4a0461ee4c66e4) [0a16926](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/0a169261f98d9546b180c2d4adbed711274f8199) [17d1d22](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/17d1d22f115d053fa5553fc774a9d5c0e1c8f51e) [d716a1c](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/d716a1c2e197ce948f91aa3702d902211b067ca8) [761db0f](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/761db0f432d392b59799255da94ba1e38789bc40) [6efd111](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/6efd111d6d730b5fed3563fecbdbf4075199a64b)

## arch: arm64: SM8350 microarchitecture compiler optimizations
Target ARMv8.2-A ISA for hardware-accelerated cryptographic instructions and RCpc atomics via `-march=armv8.2-a+crypto+rcpc`. Tune instruction scheduling for the Cortex-X1 prime core's wide out-of-order pipeline via `-mtune=cortex-x1`. Both flags wrapped in `cc-option` for graceful toolchain degradation.

## sched: BORE Scheduler v5.1.0 with WALT coexistence
Integrate BORE (Burst-Oriented Response Enhancer) by Masahito S (firelzrd), adapted for Linux 5.4 with WALT coexistence. BORE extends CFS by tracking a per-task burst time metric — tasks with low burst scores (interactive, bursty) receive priority over CPU-bound tasks, reducing UI latency on SM8350's asymmetric 1+3+4 topology. WALT initialization conflict resolved by preserving both WALT and BORE fork hooks in `sched_fork()`. Sysctl variables (`one`, `zero`, `three`) properly guarded against WALT redefinition conflicts.

Tuneable via sysctl:
- `kernel.sched_bore`
- `kernel.sched_burst_cache_lifetime`
- `kernel.sched_burst_fork_atavistic`
- `kernel.sched_burst_penalty_offset`
- `kernel.sched_burst_penalty_scale`
- `kernel.sched_burst_smoothness_long` / `short`

## sched/uclamp: EAS Integration backported from Linux 5.15
Five-patch series backporting uclamp-aware CPU capacity checking:
- `util_fits_cpu()` helper: encapsulates uclamp-aware capacity checking, correctly handling uclamp_min boost and uclamp_max cap without applying migration margin to uclamp comparisons. Adapted for 5.4: `arch_scale_thermal_pressure()` unavailable, replaced with `capacity_orig_of()` as conservative fallback.
- EAS wakeup placement: `find_energy_efficient_cpu()` now uses `uclamp_rq_util_with()` to correctly account for rq-wide uclamp aggregation when selecting CPU candidates.
- `select_idle_capacity()`: uses `util_fits_cpu()` to respect migration margin and capacity pressure under uclamp.
- `asym_fits_capacity()` → `asym_fits_cpu()`: renamed and updated to use `util_fits_cpu()` across all call sites including kworker sync wakeup path.
- iowait boost fix: iowait boost signal now honours uclamp restrictions via `uclamp_rq_util_with()`, preventing I/O-heavy tasks capped by uclamp_max from escaping frequency limits through the iowait path.

## susfs: SRCU for SUS_PATH and kstat spoofing fixes
- Implement SRCU (Sleepable RCU) for SUS_PATH operations, replacing previous locking scheme for safer concurrent path lookups.
- Fix kstat spoofing for `/system/etc/hosts` bind mount: correctly handle bind-mounted paths so spoofed size is preserved and not overridden by `update_sus_kstat()`.
- Restore `susfs_is_current_proc_umounted_app()` gate for kstat spoofing to prevent over-broad spoofing of system UIDs.
- Fix `proc_namespace` mount hiding debug logging cleanup.

## KernelSU-Next: submodule update
Updated [KernelSU-Next submodule](https://github.com/bcrtvkcs/KernelSU-Next) to latest legacy_susfs branch.

## SuSFS v2.0.0
Updated with latest commits from [gki-android16-5.4 branch of my repo](https://gitlab.com/bcrtvkcs/susfs4ksu) that compatible with *Linux Kernel 5.4 API*.

# `v1.2.3` What's New?
- ROM-side changes. Here's is the [changelog](https://crdroid.net/lemonadep/12#changelog).
- Fix brightness stuck at 100%: disable sysfs HBM for AMB670YF01
- Fix (susfs): add missing devpts hook and remove deprecated sus_su
- Cleanup (kernelsu): remove __NR_statx from syscall hook manager

Commits: [1dd56ed](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/1dd56ed81ec7b6338b768e28bcdef90b2a9d5ca0) [a894cf3](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/a894cf3e3d75d60f58dc3c43a3910438ef8df3d7) [c0a6c81](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/c0a6c81151be83c4dcea16b8e94366c123d80f12)

## Fix brightness stuck at 100%: disable sysfs HBM for AMB670YF01
Root cause identified via debug logging: crDroid framework writes
hbm_mode=1 to /sys/kernel/oplus_display/hbm, which triggers
dsi_display_normal_hbm_on() sending DSI_CMD_NORMAL_HBM_ON to the
panel. This sets brightness register (0x51) to 0x0EFF (max) and
puts the panel in HBM mode (0x53=0xE0). The hbm_mode guard then
blocks ALL subsequent brightness writes from userspace.

The FOD (fingerprint-on-display) HBM path works correctly via a
completely separate mechanism (oplus_dimlayer_hbm -> fingerprint_mode
-> sde_connector_update_hbm) and is not affected by this change.

Fix:
1. Skip DSI commands in both sysfs HBM handlers for AMB670YF01
   (oplus_display_panel_set_hbm and oplus_display_set_hbm) -
   the variable is still set but no panel commands are sent
2. Remove the hbm_mode brightness blocking guard in
   dsi_panel_update_backlight() so brightness writes always go through
3. Remove the hbm_mode check in sde_connector_update_hbm() that
   skipped sending HBM OFF during FOD exit
4. Remove all temporary BRIGHTNESS_DEBUG logging

## Fix (susfs): add missing devpts hook and remove deprecated sus_su
- Apply missing ksu_handle_devpts() hook in fs/devpts/inode.c that was defined in sucompat.c but never called, breaking PTY/TTY security context handling for root-granted apps
- Remove deprecated and unused fs/sus_su.c and include/linux/sus_su.h (dead code not compiled by Makefile, marked deprecated in susfs v2.0.0)

## Cleanup (kernelsu): remove __NR_statx from syscall hook manager
Remove __NR_statx from both check_syscall_fastpath() and the sys_enter handler in syscall_hook_manager.c, matching upstream KernelSU-Next which no longer intercepts statx at syscall level.

This code is dead anyway when CONFIG_KSU_SUSFS is enabled (which this kernel uses), but cleaning it up keeps us closer to upstream and removes unnecessary dead code paths.

# `v1.2.2` What's New?
- Kernel rebranding: **Æsir Kernel | Divine Power, Silent Dominion.**
- feat: Latest [SuSFS commits](https://gitlab.com/simonpunk/susfs4ksu/-/commits/abf5866ea052c4109e1f1c001655773d5d1ac298) applied.
- **SECURITY fix**: Allowlist bypass in SuSFS su compat handler.

Commits: [c10620e](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/c10620e363c4bc87738b18d68c63833668772e59) [23693d1](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/23693d13b71dbaf96548815657b0297ec9ebdd6c) [6fb03e3](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/6fb03e32acb698655ef5ab41d8280b234dd9fdeb) [9a138c2](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/9a138c2c2937fee1e31d7963a0e7ab45f4978b4d) [1886441](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/1886441d97d67e7e1b027691ca7e08f6d08d5c32) [b58e8a3](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/b58e8a337db77ec60c05d7a52e77be30b3da1a53)

## Kernel Rebranding: The kernel has now been renamed Æsir Kernel.
It's with great pleasure that we announce the renaming of the kernel to Æsir Kernel.
- Updated README.md to reflect the new kernel name 'Æsir Kernel' and made various text adjustments for clarity.

## susfs: add newfstatat syscall hook for Android 16 Canary compat
- Android 16 Canary uses newfstatat instead of fstat to stat init.rc
(via fstatat with AT_EMPTY_PATH). Without this hook, the stat size
doesn't include the appended KSU RC content, causing init to
truncate the injected lines.

- Add ksu_handle_sys_newfstatat() in ksud.c and hook it into
SYSCALL_DEFINE4(newfstatat) in fs/stat.c, mirroring the existing
ksu_handle_vfs_fstat() approach.

## susfs: migrate from BIT_ macros to test_bit() kernel API
Replace all hand-rolled bitwise flag checks (inode->i_mapping->flags
& BIT_SUS_*) with the standard kernel test_bit() macro. This is
both safer on architectures where unsigned long != u64 and consistent
with how set_bit() is already used for the write side.

Remove the now-unused BIT_SUS_PATH, BIT_SUS_MOUNT, BIT_SUS_KSTAT,
BIT_OPEN_REDIRECT, BIT_ANDROID_DATA_ROOT_DIR,
BIT_ANDROID_SDCARD_ROOT_DIR and BIT_SUS_MAPS defines from
susfs_def.h.  The corresponding AS_FLAGS_* constants remain and are
used by both set_bit() and the new test_bit() calls.

Files changed: susfs_def.h, susfs.c, stat.c, statfs.c, namei.c,
proc/task_mmu.c, proc/base.c

## susfs: add FUSE filesystem support and workqueue-based sdcard monitor
Port key improvements from upstream susfs4ksu@2242ee24 to kernel 5.4:

FUSE support:
- Include fuse/fuse_i.h and define FUSE_SUPER_MAGIC fallback
- susfs_add_sus_path(): detect FUSE inodes via s_magic check and
  flag the underlying fuse_inode directly with AS_FLAGS_SUS_PATH
- susfs_run_sus_path_loop(): use RCU read lock and handle FUSE
  inodes alongside regular inodes
- susfs_is_inode_sus_path() (all 3 kernel-version variants): add
  early-return for uid < 10000 and non-umounted processes, then
  check FUSE inode mapping flags via get_fuse_inode()

Sdcard monitor rewrite:
- Replace blocking kthread poll loop with non-blocking fsnotify
  callback + delayed_work architecture
- fsnotify handler defers cleanup to system_unbound_wq (5s delay)
  to avoid SRCU deadlock from calling fsnotify_destroy_group()
  inside the notification callback
- Proper cleanup via xchg() for group/inode pointers

Keep existing Android data/sdcard path lists intact - they're still
referenced by readdir.c and namei.c hooks. FUSE support provides an
additional layer of detection.

## susfs: simplify mount group ID allocation for KSU domain
Replace the separate susfs_ksu_mnt_group_ida with direct allocation
from the kernel's mnt_group_ida using susfs_is_current_ksu_domain()
as the decision predicate.

Previously, KSU mount group IDs were allocated from a dedicated IDA
gated by susfs_is_boot_completed_triggered timing, which was fragile
and leaked IDA entries on unmount after boot-completed. Now:

- mnt_alloc_group_id(): allocate from DEFAULT_KSU_MNT_GROUP_ID
  range when in KSU domain, normal range otherwise (both from
  the same mnt_group_ida)
- mnt_release_group_id(): simplified to always use mnt_group_ida
  since there is no longer a separate IDA to track
- Replace static IDA with atomic counter for KSU mount tracking

## susfs: fix SUS_MAP race in pagemap_read and harden mnt_id reorder
pagemap_read race fix (upstream f0dccf22):
Move the SUS_MAP vma check in pagemap_read() to BEFORE
up_read(&mm->mmap_sem). Previously find_vma() was called after
the mmap lock was released, creating a use-after-free race where
the vma could be freed between unlock and the sus_map flag check.

## susfs_reorder_mnt_id hardening (upstream 624a0877 + 96ad0915):
- Add atomic64_read(&susfs_ksu_mounts) early return to skip
  reordering when no KSU mounts exist
- Use proper namespace_sem + mount_hash locking instead of
  get_mnt_ns/put_mnt_ns (which only prevents namespace
  destruction, not concurrent mount modifications)
- Add list_empty() guard before list_first_entry()
- Note: kernel 5.4 uses linked lists (not rb-trees), so the
  upstream rb_next() traversal is adapted to list_for_each_entry()

## SECURITY: fix allow list bypass in SuSFS su compat handler
The SuSFS variant of ksu_handle_execveat_sucompat() was missing the
critical ksu_is_allow_uid_for_current() check that gates root access
to only allow-listed UIDs.

Without this check, ANY application calling execve("/system/bin/su")
would reach escape_with_root_profile() and gain full root credentials
(UID 0, CAP_FULL_SET, SELinux su domain) regardless of whether the
app was in the KernelSU allow list.

The non-SuSFS variant (ksu_handle_execve_sucompat, line 146) has
this check. The SuSFS variant was introduced with a different function
signature (struct filename** instead of const char __user**) but the
allow list guard was not carried over.

Fix: add ksu_is_allow_uid_for_current() check after
ksu_handle_execveat_init() and before the su path comparison,
matching the non-SuSFS variant's security model.

# `v1.1.1` What's New?
- Enable edge limit support for lemonadep
- Add haptic level adjustment for aw8697
- Implement USB2 fast charge mode for oplus_chg charger

Commits: [1a18fc2](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/1a18fc2ea0042557e1b758d557c35e1690f1eb25) [4b77ef5](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/4b77ef5d1c0f963f3b24f439c11b22a56cc4f63c) [24c799b](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/24c799b1493a3b95d49a9bf2c1659b580fc2f93e)

## arm64: lemonadep: Enable edge limit support
Uncomment `fw_edge_limit_support` in `lemonadep-19815-t0.dtsi` and `lemonadep-19815.dtsi` to enable feature.

## aw8697: Add haptic level adjustment
Add `level` field to `struct aw8697`. Implement `aw8697_haptic_set_level()` for gain adjustment (level * gain / 3, max 255). Modify `aw8697_haptic_set_gain()` to use it. Init level=3. Add sysfs `level` attr (0-10 range) for user control.

## oplus_chg: charger: Implement usb2 fast charge mode
Add module params: `force_fast_charge` (int, default 0), `ffc_val` (int, default 900). In `oplus_chg_set_input_current_limit`, set current_limit to `ffc_val` if `force_fast_charge > 0`, else use `input_current_usb_ma`.

# `v1.1.0` What's New?
- KernelSU init error propagation with proper rollback
- SUSFS/KernelSU critical bug fixes and code hardening
- AVC spoof early activation (~41s → ~2s)
- YAKT based runtime optimizations into kernel source
- Thermal safety tuning for SM8350
- Stability & consistency fixes for optimization commits

Commits: [6541737](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/654173741935c9e76bf39a7cb5b6259ca436b898) [9dc8097](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/9dc8097138572c9515297315352b05a18086e04b) [2e56d00](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/2e56d003daf123387dcb698968d76fcef5e538a3) [cf344d2](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/cf344d20bdd4bbb637318b8de5b768910a5eda59) [31c4614](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/31c461435d1ff372c127524c58864ae85469fc44) [521dcf8](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/521dcf8e0c967228aa80dc007dd23f24c75b46c7) [a491d0b](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/a491d0bbba504c276a15cf27f23a8efbed5d2a4a) [b092e3b](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/b092e3b2278c64d1f3666def284d388e32a6cfd5) [a0e9466](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/a0e9466c5da59ce96fd37ffb7a79889f69efb5f6)

## kernelsu: add goto-based init rollback for error propagation
All subsystem `_init()` functions now return `int` instead of `void`. Implemented goto-based cleanup chain in `kernelsu_init()` — if any init step fails, all previously initialized subsystems are properly torn down. Consistent signature changes across 23 files.

## susfs/kernelsu: critical bug fixes and code hardening
- Fix potential deadlock in `susfs_update_sus_kstat()`: move sleeping allocations outside spinlock
- Fix `susfs_spoof_uname()`: replace unreliable `spin_is_locked()` with proper trylock pattern
- Fix `d_path()` error handling: use `IS_ERR_OR_NULL()` instead of bare NULL check
- Fix list traversal: hold spinlock during `list_for_each_entry_safe` to prevent races
- Replace all `strncpy()` with `strscpy()` for guaranteed null-termination (30 occurrences)
- Abort `kernelsu_init()` if `prepare_creds()` fails instead of continuing with NULL cred

## kernelsu: activate avc_spoof at init second_stage instead of boot_completed
AVC spoof kprobe was registering at `boot_completed` (~41s), leaving a ~39s window where SELinux denials were visible in logcat. Now activates at `init second_stage` (~2s) by reusing cached SIDs from `cache_sid()`. Added idempotent guard to prevent double kprobe registration.

## kernel: YAKT runtime optimizations into kernel source
Port runtime tweaks from [YAKT](https://github.com/NotZeetaa/YAKT) v17 Magisk module directly into kernel source defaults. No userspace module needed — all optimizations active from boot without the 30-second delay.
- **Scheduler**: tunable_scaling LOG→NONE, min_granularity 750us→1ms, wakeup_granularity 1ms→1.5ms, child_runs_first enabled, migration_cost 500us→200us
- **Qualcomm scheduler**: colocation threshold 35→20 (more aggressive top-app boost while filtering idle tasks)
- **Timer**: timer_migration disabled (deeper CPU sleep states)
- **Perf**: CPU time max 25%→10%
- **VFS**: cache_pressure 100→50
- **VM**: stat_interval 1s→30s, page_cluster 3→0 (ZRAM optimized), dirty_ratio 20%→30%
- **Block I/O**: iostats disabled by default
- **MMC**: SPI CRC disabled
- **Network**: TCP timestamps disabled (save 12 bytes/packet)

All values remain tuneable at runtime. Inspired by [YAKT](https://github.com/NotZeetaa/YAKT), [kdrag0n](https://github.com/kdrag0n), [tytydraco](https://github.com/tytydraco).

## kernel: thermal safety tuning & stability fixes
Adjust aggressive parameters for SM8350's 1+3+4 topology to prevent overheating, and fix stability issues in optimization commits:
- `sched_migration_cost` tuned to 200us to avoid cross-cluster cache thrashing
- `colocation_threshold` set to 20 to filter idle tasks from big/prime cores
- `dirty_ratio` set to 30% to prevent writeback storms with Dynamic Fsync
- **dyn_fsync**: fix data race with `WRITE_ONCE`/`READ_ONCE` on screen_on variable
- **adrenoboost**: add u64 overflow saturation guard on busy_time
- **defconfig**: add missing `CONFIG_WQ_POWER_EFFICIENT_DEFAULT=y`

# `v1.0.2` What's New?
- Added some kernel-level optimizations
Commits: [5d8b939](https://github.com/bcrtvkcs/aesir_kernel_oneplus_sm8350/commit/5d8b9397ba016893f440c8c809d6d753392fad9e)

## kernel: apply Tier 1 performance optimizations from popular custom kernels
Based on analysis of arter97, blu_spark, McQuaid, and Eva custom kernels, apply the most impactful and lowest-risk optimizations:

- Enable BBR TCP congestion control as default (used by arter97, blu_spark) with `FQ` and `FQ_CODEL` schedulers for proper BBR operation
- Change ZRAM default compressor from lzo-rle to lz4 for 2-3x faster decompression (used by arter97, blu_spark, McQuaid)
- Switch default CPU governor from performance to schedutil for better battery life and sustained performance (used by arter97, McQuaid)
- Enable power-efficient workqueues (used by Eva, McQuaid) to schedule non-critical work on LITTLE cores
- Disable unnecessary debug flags (`DEBUG_INFO`, `SCHEDSTATS`, `PROFILING`, `DEBUG_STACK_USAGE`, `DEBUG_MEMORY_INIT`, `FUNCTION_ERROR_INJECTION`) for smaller kernel image and reduced runtime overhead

## gpu: msm: add Adrenoboost GPU frequency boost support
Add configurable GPU frequency boost to msm-adreno-tz governor, based on flar2's implementation used in blu_spark and ElementalX kernels.

Adrenoboost artificially inflates the reported GPU busy_time by a configurable multiplier, causing the governor to scale up frequencies more aggressively. This does NOT bypass thermal protections or overclock the GPU - it only biases the DCVS decision input.

Boost levels (via sysfs):
  0 = off (default, no behavior change)
  1 = low  (2x busy_time, good for daily use)
  2 = medium (4x busy_time, good for gaming)
  3 = high (5x busy_time, aggressive for benchmarks)

`sysfs: /sys/class/kgsl/kgsl-3d0/devfreq/adrenoboost`

Automatically detected by KernelAdiutor and Franco Kernel Manager.

## fs: add Dynamic Fsync battery optimization
Implement flar2's Dynamic Fsync feature for battery savings. When screen is off, `fsync()` calls are skipped to reduce disk I/O and CPU wakeups. When screen turns on, all pending dirty data is flushed via `ksys_sync()` to ensure data integrity.

Screen state is tracked via MSM DRM notifier (Qualcomm SM8350). Feature is enabled by default and controllable via sysfs: `/sys/kernel/dyn_fsync/Fsync_enabled`

# `v1.0` Inital Release
