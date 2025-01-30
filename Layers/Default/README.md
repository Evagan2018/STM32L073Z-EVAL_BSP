# Board: STMicroelectronics [STM32L073Z-EVAL](https://www.st.com/en/evaluation-tools/stm32l073z-eval.html)

## Default Board Layer

Device: **STM32L073VZT3**

System Core Clock: **32 MHz**

This setup is configured using **STM32CubeMX**, an interactive tool provided by STMicroelectronics for device configuration.
Refer to ["Configure STM32 Devices with CubeMX"](https://open-cmsis-pack.github.io/cmsis-toolbox/CubeMX/) for additional information.

### System Configuration

| System resource       | Setting
|:----------------------|:--------------------------------------
| Heap                  |  2 kB (configured in the STM32CubeMX)
| Stack (MSP)           |  1 kB (configured in the STM32CubeMX)

### STDIO mapping

**STDIO** is routed to Virtual COM port on the ST-LINK (using **USART4** peripheral)

### CMSIS-Driver mapping

| CMSIS-Driver          | Peripheral            | Board connector/component                        | Connection
|:----------------------|:----------------------|:-------------------------------------------------|:------------------------------
| Driver_USART4         | USART4                | ST-LINK connector (CN17)                         | STDIN, STDOUT, STDERR
| Driver_USBD0          | USB_FS                | User USB connector (CN9)                         | CMSIS_USB_Device
| CMSIS-Driver VIO      | GPIO                  | LEDs (LD1, LD2, LD3, LD4) and Tamper button (B2) | CMSIS_VIO

### CMSIS-Driver Virtual I/O mapping

| CMSIS-Driver VIO      | Board component
|:----------------------|:--------------------------------------
| vioBUTTON0            | Tamper button (B2)
| vioLED0               | LED red       (LD3)
| vioLED1               | LED green     (LD1)
| vioLED2               | LED blue      (LD4)
| vioLED3               | LED orange    (LD2)

> **Note:**  Layer has been created with Firmware Package STM32Cube_FW_L0_V1.12.2.
