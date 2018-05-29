/*
 * Copyright (c) 2016-2018 Nordic Semiconductor ASA.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __INC_BOARD_H
#define __INC_BOARD_H

#include <soc.h>

/* Onboard RED LED */
#define LED0_GPIO_PIN  22
#define LED0_GPIO_PORT CONFIG_GPIO_NRF5_P0_DEV_NAME

/* Onboard BLUE LED */
#define LED1_GPIO_PIN  23
#define LED1_GPIO_PORT CONFIG_GPIO_NRF5_P0_DEV_NAME

/* Onboard GREEN LED */
#define LED2_GPIO_PIN  24
#define LED2_GPIO_PORT CONFIG_GPIO_NRF5_P0_DEV_NAME


#endif /* __INC_BOARD_H */
