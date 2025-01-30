/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 28/01/2025 13:39:42
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

#ifndef MX_DEVICE_H__
#define MX_DEVICE_H__

/* MX_Device.h version */
#define MX_DEVICE_VERSION                       0x01000000


/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                 1

/* Peripheral Clock Frequency */
#define MX_I2C1_PERIPH_CLOCK_FREQ               24000000

/* Pins */

/* I2C1_SCL */
#define MX_I2C1_SCL_Pin                         PB6
#define MX_I2C1_SCL_GPIO_Pin                    GPIO_PIN_6
#define MX_I2C1_SCL_GPIOx                       GPIOB
#define MX_I2C1_SCL_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C1_SCL_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C1_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SCL_GPIO_AF                     GPIO_AF1_I2C1

/* I2C1_SDA */
#define MX_I2C1_SDA_Pin                         PB7
#define MX_I2C1_SDA_GPIO_Pin                    GPIO_PIN_7
#define MX_I2C1_SDA_GPIOx                       GPIOB
#define MX_I2C1_SDA_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C1_SDA_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C1_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SDA_GPIO_AF                     GPIO_AF1_I2C1

/* I2C1_SMBA */
#define MX_I2C1_SMBA_Pin                        PB5
#define MX_I2C1_SMBA_GPIO_Pin                   GPIO_PIN_5
#define MX_I2C1_SMBA_GPIOx                      GPIOB
#define MX_I2C1_SMBA_GPIO_Mode                  GPIO_MODE_AF_OD
#define MX_I2C1_SMBA_GPIO_PuPd                  GPIO_PULLUP
#define MX_I2C1_SMBA_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SMBA_GPIO_AF                    GPIO_AF3_I2C1

/*------------------------------ LPUART1        -----------------------------*/
#define MX_LPUART1                              1

/* Pins */

/* LPUART1_CTS */
#define MX_LPUART1_CTS_Pin                      PD11
#define MX_LPUART1_CTS_GPIO_Pin                 GPIO_PIN_11
#define MX_LPUART1_CTS_GPIOx                    GPIOD
#define MX_LPUART1_CTS_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_LPUART1_CTS_GPIO_PuPd                GPIO_NOPULL
#define MX_LPUART1_CTS_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_LPUART1_CTS_GPIO_AF                  GPIO_AF0_LPUART1

/* LPUART1_RTS */
#define MX_LPUART1_RTS_Pin                      PD12
#define MX_LPUART1_RTS_GPIO_Pin                 GPIO_PIN_12
#define MX_LPUART1_RTS_GPIOx                    GPIOD
#define MX_LPUART1_RTS_GPIO_Mode                GPIO_MODE_AF_PP
#define MX_LPUART1_RTS_GPIO_PuPd                GPIO_NOPULL
#define MX_LPUART1_RTS_GPIO_Speed               GPIO_SPEED_FREQ_VERY_HIGH
#define MX_LPUART1_RTS_GPIO_AF                  GPIO_AF0_LPUART1

/* LPUART1_RX */
#define MX_LPUART1_RX_Pin                       PD9
#define MX_LPUART1_RX_GPIO_Pin                  GPIO_PIN_9
#define MX_LPUART1_RX_GPIOx                     GPIOD
#define MX_LPUART1_RX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_LPUART1_RX_GPIO_PuPd                 GPIO_NOPULL
#define MX_LPUART1_RX_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_LPUART1_RX_GPIO_AF                   GPIO_AF0_LPUART1

/* LPUART1_TX */
#define MX_LPUART1_TX_Pin                       PD8
#define MX_LPUART1_TX_GPIO_Pin                  GPIO_PIN_8
#define MX_LPUART1_TX_GPIOx                     GPIOD
#define MX_LPUART1_TX_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_LPUART1_TX_GPIO_PuPd                 GPIO_NOPULL
#define MX_LPUART1_TX_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_LPUART1_TX_GPIO_AF                   GPIO_AF0_LPUART1

/*------------------------------ SPI1           -----------------------------*/
#define MX_SPI1                                 1

/* Peripheral Clock Frequency */
#define MX_SPI1_PERIPH_CLOCK_FREQ               24000000

/* Pins */

/* SPI1_MISO */
#define MX_SPI1_MISO_Pin                        PE14
#define MX_SPI1_MISO_GPIO_Pin                   GPIO_PIN_14
#define MX_SPI1_MISO_GPIOx                      GPIOE
#define MX_SPI1_MISO_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI1_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_MISO_GPIO_AF                    GPIO_AF2_SPI1

/* SPI1_MOSI */
#define MX_SPI1_MOSI_Pin                        PE15
#define MX_SPI1_MOSI_GPIO_Pin                   GPIO_PIN_15
#define MX_SPI1_MOSI_GPIOx                      GPIOE
#define MX_SPI1_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI1_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_MOSI_GPIO_AF                    GPIO_AF2_SPI1

/* SPI1_SCK */
#define MX_SPI1_SCK_Pin                         PE13
#define MX_SPI1_SCK_GPIO_Pin                    GPIO_PIN_13
#define MX_SPI1_SCK_GPIOx                       GPIOE
#define MX_SPI1_SCK_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SPI1_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI1_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_SCK_GPIO_AF                     GPIO_AF2_SPI1

/*------------------------------ USART2         -----------------------------*/
#define MX_USART2                               1

/* Virtual mode */
#define MX_USART2_VM                            VM_ASYNC
#define MX_USART2_VM_ASYNC                      1

/* Pins */

/* USART2_CTS */
#define MX_USART2_CTS_Pin                       PD3
#define MX_USART2_CTS_GPIO_Pin                  GPIO_PIN_3
#define MX_USART2_CTS_GPIOx                     GPIOD
#define MX_USART2_CTS_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART2_CTS_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART2_CTS_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART2_CTS_GPIO_AF                   GPIO_AF0_USART2

/* USART2_RTS */
#define MX_USART2_RTS_Pin                       PD4
#define MX_USART2_RTS_GPIO_Pin                  GPIO_PIN_4
#define MX_USART2_RTS_GPIOx                     GPIOD
#define MX_USART2_RTS_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART2_RTS_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART2_RTS_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART2_RTS_GPIO_AF                   GPIO_AF0_USART2

/* USART2_RX */
#define MX_USART2_RX_Pin                        PD6
#define MX_USART2_RX_GPIO_Pin                   GPIO_PIN_6
#define MX_USART2_RX_GPIOx                      GPIOD
#define MX_USART2_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART2_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART2_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART2_RX_GPIO_AF                    GPIO_AF0_USART2

/* USART2_TX */
#define MX_USART2_TX_Pin                        PD5
#define MX_USART2_TX_GPIO_Pin                   GPIO_PIN_5
#define MX_USART2_TX_GPIOx                      GPIOD
#define MX_USART2_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART2_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART2_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART2_TX_GPIO_AF                    GPIO_AF0_USART2

/*------------------------------ USART4         -----------------------------*/
#define MX_USART4                               1

/* Virtual mode */
#define MX_USART4_VM                            VM_ASYNC
#define MX_USART4_VM_ASYNC                      1

/* Pins */

/* USART4_RX */
#define MX_USART4_RX_Pin                        PE9
#define MX_USART4_RX_GPIO_Pin                   GPIO_PIN_9
#define MX_USART4_RX_GPIOx                      GPIOE
#define MX_USART4_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART4_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART4_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART4_RX_GPIO_AF                    GPIO_AF6_USART4

/* USART4_TX */
#define MX_USART4_TX_Pin                        PE8
#define MX_USART4_TX_GPIO_Pin                   GPIO_PIN_8
#define MX_USART4_TX_GPIOx                      GPIOE
#define MX_USART4_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART4_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART4_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART4_TX_GPIO_AF                    GPIO_AF6_USART4

/*------------------------------ USB            -----------------------------*/
#define MX_USB                                  1

/* Handle */
#define MX_USB_HANDLE                           hpcd_USB_FS


#endif  /* MX_DEVICE_H__ */
