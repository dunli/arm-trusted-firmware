/*
 * Copyright (c) 2015-2019, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef STM32MP1_PRIVATE_H
#define STM32MP1_PRIVATE_H

#include <stdint.h>

void stm32mp1_io_setup(void);
void configure_mmu(void);

void stm32mp1_arch_security_setup(void);
void stm32mp1_security_setup(void);

void stm32mp1_save_boot_ctx_address(uintptr_t address);
uintptr_t stm32mp1_get_boot_ctx_address(void);

void stm32mp1_gic_pcpu_init(void);
void stm32mp1_gic_init(void);

uintptr_t stm32_get_gpio_bank_base(unsigned int bank);
unsigned long stm32_get_gpio_bank_clock(unsigned int bank);
uint32_t stm32_get_gpio_bank_offset(unsigned int bank);

#endif /* STM32MP1_PRIVATE_H */
