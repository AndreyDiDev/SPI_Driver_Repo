/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32l4xx_hal.h"

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

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */



// ****************** SOAR main avionics start



/* System Handles ------------------------------------------------------------------*/
/* This should be the only place externs are allowed -------------------------------*/
//UART Handles
//extern UART_HandleTypeDef huart1;   // UART1 - Launch Systems  ... Confirm
//extern UART_HandleTypeDef huart2;   // UART2 - Logging (Radio)
//extern UART_HandleTypeDef huart3;   // UART3 - PBB
extern UART_HandleTypeDef huart4;   // UART4 - GPS
//extern UART_HandleTypeDef huart6;   // UART5 - Debug

//ADC Handles
extern ADC_HandleTypeDef hadc1;      // ADC1 - Combustion Chamber ADC
extern ADC_HandleTypeDef hadc2;      // ADC2 - Battery

//I2C Handles
//extern I2C_HandleTypeDef hi2c1;      // I2C1 -- EEPROM (? - Do we still have an I2C EEPROM)

//SPI Handles
extern SPI_HandleTypeDef hspi1;      // SPI1 - IMU
extern SPI_HandleTypeDef hspi3;      // SPI3 - Barometer MOSI/MISO/CLK

//CRC Handles
extern CRC_HandleTypeDef hcrc;       // CRC - Hardware CRC System Handle

//DMA Handles
extern DMA_HandleTypeDef hdma_uart4_rx; // DMA UART 4 RX -
extern DMA_HandleTypeDef hdma_uart5_rx; // DMA UART 5 RX -
extern DMA_HandleTypeDef hdma_uart5_tx; // DMA UART 5 TX -

namespace SystemHandles {
    // Aliases
    //constexpr UART_HandleTypeDef* UART_LaunchSystems = &huart2;
    //constexpr UART_HandleTypeDef* UART_Protocol = &huart1; // Protocol Tx/Rx Radio Line
    constexpr UART_HandleTypeDef* UART_GPS = &huart4;
    //constexpr UART_HandleTypeDef* UART_PBB = &huart2;
    //constexpr UART_HandleTypeDef* UART_Debug = &huart6;

    constexpr ADC_HandleTypeDef* ADC_CombustionChamber = &hadc1;
    constexpr ADC_HandleTypeDef* ADC_Battery = &hadc2;

    constexpr SPI_HandleTypeDef* SPI_IMU = &hspi1;
    constexpr SPI_HandleTypeDef* SPI_Barometer = &hspi3;

    constexpr CRC_HandleTypeDef* CRC_Handle = &hcrc;

    // DMA Aliases

}

// ****************** SOAR main avionics end



#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
