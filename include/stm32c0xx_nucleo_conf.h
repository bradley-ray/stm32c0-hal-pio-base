#ifndef STM32C0XX_NUCLEO_CONF_H
#define STM32C0XX_NUCLEO_CONF_H

#ifdef __cplusplus
// extern "C" {
#endif

#include "stm32c0xx_hal.h"

#define USE_STM32C0XX_NUCLEO

/* COM define */
#define USE_COM_LOG                         0U
#define USE_BSP_COM_FEATURE                 0U

/* IRQ priorities */
#define BSP_BUTTON_USER_IT_PRIORITY         15U

#ifdef __cplusplus
// }
#endif

#endif