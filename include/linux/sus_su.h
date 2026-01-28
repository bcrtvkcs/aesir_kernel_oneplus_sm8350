#ifndef __KSU_H_SUS_SU
#define __KSU_H_SUS_SU

/* KernelSU v3.0.0: escape_to_root was replaced with escape_with_root_profile */
#include "../../drivers/kernelsu/app_profile.h"

int sus_su_fifo_init(int *maj_dev_num, char *drv_path);
int sus_su_fifo_exit(int *maj_dev_num, char *drv_path);

#endif
