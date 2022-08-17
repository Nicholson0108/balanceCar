/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file    gpio.h
 * @brief   This file contains all the function prototypes for
 *          the gpio.c file
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __GPIO_H__
#define __GPIO_H__

#ifdef __cplusplus
extern "C"
{
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/*
e.g.
HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_0);
HAL_Delay(1000);

HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
HAL_Delay(500);
HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
HAL_Delay(500);
*/

/* public */
/**
 * @brief 初始化led
 * 
 */
void LED_Init(void);

/**
 * @brief 使能led
 * 
 */
void LED_Run();
/* public */

/* Private */
// 初始化一个引腳
void _One_LED_Init(GPIO_TypeDef *GPIOx, uint32_t Pin);
/* Private */

#ifdef __cplusplus
}
#endif
#endif /*__ GPIO_H__ */
