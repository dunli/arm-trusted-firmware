/*
 * Copyright (c) 2018, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __PLATFORM_DEF_H__
#define __PLATFORM_DEF_H__

#include <common_def.h>

/* CPU topology */
#define PLAT_MAX_CORES_PER_CLUSTER	2
#define PLAT_CLUSTER_COUNT		12
#define PLATFORM_CORE_COUNT		(PLAT_CLUSTER_COUNT *	\
					 PLAT_MAX_CORES_PER_CLUSTER)

#define CACHE_WRITEBACK_SHIFT		6
#define CACHE_WRITEBACK_GRANULE		(1 << CACHE_WRITEBACK_SHIFT)

#define PLATFORM_STACK_SIZE		0x400

#define BL31_BASE			0x04000000
#define BL31_SIZE			0x00080000
#define BL31_LIMIT			(BL31_BASE + BL31_SIZE)

/* UART related constants */
#define PLAT_SQ_BOOT_UART_BASE		0x2A400000
#define PLAT_SQ_BOOT_UART_CLK_IN_HZ	62500000
#define SQ_CONSOLE_BAUDRATE		115200

#define SQ_BOOT_CFG_ADDR			0x45410000
#define PLAT_SQ_PRIMARY_CPU_SHIFT		8
#define PLAT_SQ_PRIMARY_CPU_BIT_WIDTH		6

#endif /* __PLATFORM_DEF_H__ */
