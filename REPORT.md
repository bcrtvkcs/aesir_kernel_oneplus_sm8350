# KernelSU-Next Integration Analysis Report

This report summarizes the differences between the local `drivers/kernelsu` directory and the upstream `KernelSU-Next` repository (specifically the `kernel` directory). It also highlights potential issues with kernel hooks in the main source tree.

## 1. Driver Code Differences (`drivers/kernelsu`)

### Susfs Integration Mismatch
- **Local:** Uses an older or different Susfs API (`susfs_set_uname(&user_info)`).
- **Remote (KernelSU-Next):** Uses a newer API (`susfs_set_uname(arg)`).
- **Impact:** Updating `drivers/kernelsu` to match the remote requires updating the core Susfs implementation (likely in `fs/susfs.c`) to support the new API. Failure to do so will break compilation.

### Function Signature Changes
Several initialization functions have changed their return type from `int` to `void` in the remote repository. The following functions need updates:
- `ksu_supercalls_init()`
- `sulog_init_heap()`
- `ksu_syscall_hook_manager_init()`
- `ksu_throne_tracker_init()`

### Logic Changes
- **`ksu_install_fd`**: Logic for handling `tw->outp` has changed.
- **Statx Hook Removed**: The remote `syscall_hook_manager.c` no longer handles `__NR_statx`. This suggests KSU-Next does not intercept `statx` at the syscall level anymore.

## 2. Kernel Hook Verification (`fs/`, `drivers/input/`)

The following hooks were checked against functions available in `KernelSU-Next`:

### Invalid/Dead Hook Found
- **File:** `fs/stat.c`
- **Issue:** Calls `ksu_handle_sys_newfstatat(...)`.
- **Finding:** This function **does not exist** in the `KernelSU-Next` driver code. This hook is invalid and should be removed or replaced with `ksu_handle_stat`.

### Valid Hooks
The following hooks appear correct and correspond to functions in `KernelSU-Next`:
- `fs/exec.c` -> `ksu_handle_execveat` (Matches generic pointer signature).
- `fs/read_write.c` -> `ksu_handle_sys_read`
- `drivers/input/input.c` -> `ksu_handle_input_handle_event`
- `fs/open.c` -> `ksu_handle_faccessat`
- `fs/devpts/inode.c` -> `ksu_handle_devpts`
- `fs/stat.c` -> `ksu_handle_vfs_fstat` and `ksu_handle_stat`

## 3. Recommendations

1.  **Update `drivers/kernelsu`**: Sync the entire directory with `KernelSU-Next`.
2.  **Fix Susfs**: Update `fs/susfs.c` to support the new `susfs_set_uname(arg)` API.
3.  **Clean up Hooks**: Remove the dead `ksu_handle_sys_newfstatat` hook from `fs/stat.c`.
