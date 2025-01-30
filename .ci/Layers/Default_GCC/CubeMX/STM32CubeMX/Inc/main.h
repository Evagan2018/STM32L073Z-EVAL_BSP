/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
extern int stdio_init   (void);
extern int app_main     (void);
extern int shield_setup (void);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define EXT_RESET_Pin GPIO_PIN_2
#define EXT_RESET_GPIO_Port GPIOE
#define LED1_Pin GPIO_PIN_4
#define LED1_GPIO_Port GPIOE
#define LED2_Pin GPIO_PIN_5
#define LED2_GPIO_Port GPIOE
#define MFX_IRQOUT_Pin GPIO_PIN_6
#define MFX_IRQOUT_GPIO_Port GPIOE
#define TAMPER_Button_Pin GPIO_PIN_13
#define TAMPER_Button_GPIO_Port GPIOC
#define SPI1_MOSI_DIR_Pin GPIO_PIN_9
#define SPI1_MOSI_DIR_GPIO_Port GPIOH
#define MFX_WKUP_Pin GPIO_PIN_10
#define MFX_WKUP_GPIO_Port GPIOH
#define DET_LPTIM_CH1_Pin GPIO_PIN_0
#define DET_LPTIM_CH1_GPIO_Port GPIOC
#define PRESSURE_Pin GPIO_PIN_0
#define PRESSURE_GPIO_Port GPIOA
#define DAC_OUT1_Pin GPIO_PIN_4
#define DAC_OUT1_GPIO_Port GPIOA
#define ADC_IN5_Pin GPIO_PIN_5
#define ADC_IN5_GPIO_Port GPIOA
#define DET_COMP2_OUT_Pin GPIO_PIN_7
#define DET_COMP2_OUT_GPIO_Port GPIOA
#define TST_MOSI_DIR_Pin GPIO_PIN_4
#define TST_MOSI_DIR_GPIO_Port GPIOC
#define LED4_Pin GPIO_PIN_7
#define LED4_GPIO_Port GPIOE
#define USART4_TX_Pin GPIO_PIN_8
#define USART4_TX_GPIO_Port GPIOE
#define USART4_RX_3V3_Pin GPIO_PIN_9
#define USART4_RX_3V3_GPIO_Port GPIOE
#define TFT_CS_Pin GPIO_PIN_10
#define TFT_CS_GPIO_Port GPIOE
#define SPI1_SCK_Pin GPIO_PIN_13
#define SPI1_SCK_GPIO_Port GPIOE
#define SPI1_MISO_3V3_Pin GPIO_PIN_14
#define SPI1_MISO_3V3_GPIO_Port GPIOE
#define SPI1_MOSI_Pin GPIO_PIN_15
#define SPI1_MOSI_GPIO_Port GPIOE
#define LPUART_TX_Pin GPIO_PIN_8
#define LPUART_TX_GPIO_Port GPIOD
#define LPUART_RX_3V3_Pin GPIO_PIN_9
#define LPUART_RX_3V3_GPIO_Port GPIOD
#define LPUART_CTS_3V3_Pin GPIO_PIN_11
#define LPUART_CTS_3V3_GPIO_Port GPIOD
#define LPUART_RTS_Pin GPIO_PIN_12
#define LPUART_RTS_GPIO_Port GPIOD
#define USB_DM_Pin GPIO_PIN_11
#define USB_DM_GPIO_Port GPIOA
#define USB_DP_Pin GPIO_PIN_12
#define USB_DP_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define MicroSD_CS_Pin GPIO_PIN_0
#define MicroSD_CS_GPIO_Port GPIOD
#define LED3_Pin GPIO_PIN_1
#define LED3_GPIO_Port GPIOD
#define USART2_CTS_3V3_Pin GPIO_PIN_3
#define USART2_CTS_3V3_GPIO_Port GPIOD
#define USART2_RTS_Pin GPIO_PIN_4
#define USART2_RTS_GPIO_Port GPIOD
#define USART2_TX_Pin GPIO_PIN_5
#define USART2_TX_GPIO_Port GPIOD
#define USART2_RX_3V3_Pin GPIO_PIN_6
#define USART2_RX_3V3_GPIO_Port GPIOD
#define DET_PULSE_Pin GPIO_PIN_7
#define DET_PULSE_GPIO_Port GPIOD
#define DET_COMP2_INM_Pin GPIO_PIN_3
#define DET_COMP2_INM_GPIO_Port GPIOB
#define DET_COMP2_INP_Pin GPIO_PIN_4
#define DET_COMP2_INP_GPIO_Port GPIOB
#define TempSensor_INT_Pin GPIO_PIN_5
#define TempSensor_INT_GPIO_Port GPIOB
#define I2C1_SCL_Pin GPIO_PIN_6
#define I2C1_SCL_GPIO_Port GPIOB
#define I2C1_SDA_Pin GPIO_PIN_7
#define I2C1_SDA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
