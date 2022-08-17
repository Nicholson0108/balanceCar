/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file    gpio.c
 * @brief   This file provides code for the configuration
 *          of all used GPIO pins.
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

/* Includes ------------------------------------------------------------------*/
#include "led.h"

/*----------------------------------------------------------------------------*/
/* Configure LED                                                             */
/*----------------------------------------------------------------------------*/
/* public */
void LED_Init(void)
{
  /* LED Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  _One_LED_Init(GPIOA, GPIO_PIN_0);
}

void LED_Run(void)
{
  HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_0);
  HAL_Delay(1000);

  // HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
  // HAL_Delay(100);
  // HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
  // HAL_Delay(100);
}
/* public */

/* Private */
void _One_LED_Init(GPIO_TypeDef *GPIOx, uint32_t Pin)
{
  // 定义LED的结构体变量
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  GPIO_InitStruct.Pin = Pin;     // 选择LED的引脚
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;   // 设置为推挽输出模式
  GPIO_InitStruct.Pull = GPIO_PULLUP;   // 默认上拉
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW; // 引脚输出速度设置为慢

  // 初始化引脚配置
  HAL_GPIO_Init(GPIOx, &GPIO_InitStruct);
}
/* Private */
