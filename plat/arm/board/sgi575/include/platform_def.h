/*
 * Copyright (c) 2018, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef PLATFORM_DEF_H
#define PLATFORM_DEF_H

#include <lib/utils_def.h>

#include <sgi_base_platform_def.h>

#define PLAT_ARM_CLUSTER_COUNT		2
#define CSS_SGI_MAX_CPUS_PER_CLUSTER	4
#define CSS_SGI_MAX_PE_PER_CPU		1

#define PLAT_CSS_MHU_BASE		UL(0x45000000)

/* Base address of DMC-620 instances */
#define SGI575_DMC620_BASE0		UL(0x4e000000)
#define SGI575_DMC620_BASE1		UL(0x4e100000)

/* System power domain level */
#define CSS_SYSTEM_PWR_DMN_LVL		ARM_PWR_LVL2

#define PLAT_MAX_PWR_LVL		ARM_PWR_LVL1

#endif /* PLATFORM_DEF_H */
