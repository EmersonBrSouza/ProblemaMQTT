/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_qsys_0' in SOPC Builder design 'lcd'
 * SOPC Builder design path: ../../lcd.sopcinfo
 *
 * Generated: Wed Nov 21 10:47:59 BRT 2018
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x4820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0xf
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x2020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0xf
#define ALT_CPU_NAME "nios2_qsys_0"
#define ALT_CPU_RESET_ADDR 0x2000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x4820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0xf
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x2020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0xf
#define NIOS2_RESET_ADDR 0x2000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_LCD_16207
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_UART
#define __ALTERA_NIOS2_QSYS


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/uart_main"
#define ALT_STDERR_BASE 0x5020
#define ALT_STDERR_DEV uart_main
#define ALT_STDERR_IS_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_uart"
#define ALT_STDIN "/dev/uart_main"
#define ALT_STDIN_BASE 0x5020
#define ALT_STDIN_DEV uart_main
#define ALT_STDIN_IS_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_uart"
#define ALT_STDOUT "/dev/uart_main"
#define ALT_STDOUT_BASE 0x5020
#define ALT_STDOUT_DEV uart_main
#define ALT_STDOUT_IS_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_uart"
#define ALT_SYSTEM_NAME "lcd"


/*
 * button_down configuration
 *
 */

#define ALT_MODULE_CLASS_button_down altera_avalon_pio
#define BUTTON_DOWN_BASE 0x50b0
#define BUTTON_DOWN_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON_DOWN_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON_DOWN_CAPTURE 0
#define BUTTON_DOWN_DATA_WIDTH 1
#define BUTTON_DOWN_DO_TEST_BENCH_WIRING 0
#define BUTTON_DOWN_DRIVEN_SIM_VALUE 0
#define BUTTON_DOWN_EDGE_TYPE "NONE"
#define BUTTON_DOWN_FREQ 50000000
#define BUTTON_DOWN_HAS_IN 1
#define BUTTON_DOWN_HAS_OUT 0
#define BUTTON_DOWN_HAS_TRI 0
#define BUTTON_DOWN_IRQ -1
#define BUTTON_DOWN_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON_DOWN_IRQ_TYPE "NONE"
#define BUTTON_DOWN_NAME "/dev/button_down"
#define BUTTON_DOWN_RESET_VALUE 0
#define BUTTON_DOWN_SPAN 16
#define BUTTON_DOWN_TYPE "altera_avalon_pio"


/*
 * button_enter configuration
 *
 */

#define ALT_MODULE_CLASS_button_enter altera_avalon_pio
#define BUTTON_ENTER_BASE 0x5050
#define BUTTON_ENTER_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON_ENTER_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON_ENTER_CAPTURE 0
#define BUTTON_ENTER_DATA_WIDTH 1
#define BUTTON_ENTER_DO_TEST_BENCH_WIRING 0
#define BUTTON_ENTER_DRIVEN_SIM_VALUE 0
#define BUTTON_ENTER_EDGE_TYPE "NONE"
#define BUTTON_ENTER_FREQ 50000000
#define BUTTON_ENTER_HAS_IN 1
#define BUTTON_ENTER_HAS_OUT 0
#define BUTTON_ENTER_HAS_TRI 0
#define BUTTON_ENTER_IRQ -1
#define BUTTON_ENTER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON_ENTER_IRQ_TYPE "NONE"
#define BUTTON_ENTER_NAME "/dev/button_enter"
#define BUTTON_ENTER_RESET_VALUE 0
#define BUTTON_ENTER_SPAN 16
#define BUTTON_ENTER_TYPE "altera_avalon_pio"


/*
 * button_exit configuration
 *
 */

#define ALT_MODULE_CLASS_button_exit altera_avalon_pio
#define BUTTON_EXIT_BASE 0x5060
#define BUTTON_EXIT_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON_EXIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON_EXIT_CAPTURE 0
#define BUTTON_EXIT_DATA_WIDTH 1
#define BUTTON_EXIT_DO_TEST_BENCH_WIRING 0
#define BUTTON_EXIT_DRIVEN_SIM_VALUE 0
#define BUTTON_EXIT_EDGE_TYPE "NONE"
#define BUTTON_EXIT_FREQ 50000000
#define BUTTON_EXIT_HAS_IN 1
#define BUTTON_EXIT_HAS_OUT 0
#define BUTTON_EXIT_HAS_TRI 0
#define BUTTON_EXIT_IRQ -1
#define BUTTON_EXIT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON_EXIT_IRQ_TYPE "NONE"
#define BUTTON_EXIT_NAME "/dev/button_exit"
#define BUTTON_EXIT_RESET_VALUE 0
#define BUTTON_EXIT_SPAN 16
#define BUTTON_EXIT_TYPE "altera_avalon_pio"


/*
 * button_up configuration
 *
 */

#define ALT_MODULE_CLASS_button_up altera_avalon_pio
#define BUTTON_UP_BASE 0x5070
#define BUTTON_UP_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON_UP_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON_UP_CAPTURE 0
#define BUTTON_UP_DATA_WIDTH 1
#define BUTTON_UP_DO_TEST_BENCH_WIRING 0
#define BUTTON_UP_DRIVEN_SIM_VALUE 0
#define BUTTON_UP_EDGE_TYPE "NONE"
#define BUTTON_UP_FREQ 50000000
#define BUTTON_UP_HAS_IN 1
#define BUTTON_UP_HAS_OUT 0
#define BUTTON_UP_HAS_TRI 0
#define BUTTON_UP_IRQ -1
#define BUTTON_UP_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON_UP_IRQ_TYPE "NONE"
#define BUTTON_UP_NAME "/dev/button_up"
#define BUTTON_UP_RESET_VALUE 0
#define BUTTON_UP_SPAN 16
#define BUTTON_UP_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x50c8
#define JTAG_UART_0_IRQ 0
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * lcd_output configuration
 *
 */

#define ALT_MODULE_CLASS_lcd_output altera_avalon_lcd_16207
#define LCD_OUTPUT_BASE 0x5040
#define LCD_OUTPUT_IRQ -1
#define LCD_OUTPUT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LCD_OUTPUT_NAME "/dev/lcd_output"
#define LCD_OUTPUT_SPAN 16
#define LCD_OUTPUT_TYPE "altera_avalon_lcd_16207"


/*
 * led_b configuration
 *
 */

#define ALT_MODULE_CLASS_led_b altera_avalon_pio
#define LED_B_BASE 0x5090
#define LED_B_BIT_CLEARING_EDGE_REGISTER 0
#define LED_B_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_B_CAPTURE 0
#define LED_B_DATA_WIDTH 1
#define LED_B_DO_TEST_BENCH_WIRING 0
#define LED_B_DRIVEN_SIM_VALUE 0
#define LED_B_EDGE_TYPE "NONE"
#define LED_B_FREQ 50000000
#define LED_B_HAS_IN 0
#define LED_B_HAS_OUT 1
#define LED_B_HAS_TRI 0
#define LED_B_IRQ -1
#define LED_B_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED_B_IRQ_TYPE "NONE"
#define LED_B_NAME "/dev/led_b"
#define LED_B_RESET_VALUE 0
#define LED_B_SPAN 16
#define LED_B_TYPE "altera_avalon_pio"


/*
 * led_g configuration
 *
 */

#define ALT_MODULE_CLASS_led_g altera_avalon_pio
#define LED_G_BASE 0x5080
#define LED_G_BIT_CLEARING_EDGE_REGISTER 0
#define LED_G_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_G_CAPTURE 0
#define LED_G_DATA_WIDTH 1
#define LED_G_DO_TEST_BENCH_WIRING 0
#define LED_G_DRIVEN_SIM_VALUE 0
#define LED_G_EDGE_TYPE "NONE"
#define LED_G_FREQ 50000000
#define LED_G_HAS_IN 0
#define LED_G_HAS_OUT 1
#define LED_G_HAS_TRI 0
#define LED_G_IRQ -1
#define LED_G_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED_G_IRQ_TYPE "NONE"
#define LED_G_NAME "/dev/led_g"
#define LED_G_RESET_VALUE 0
#define LED_G_SPAN 16
#define LED_G_TYPE "altera_avalon_pio"


/*
 * led_r configuration
 *
 */

#define ALT_MODULE_CLASS_led_r altera_avalon_pio
#define LED_R_BASE 0x50a0
#define LED_R_BIT_CLEARING_EDGE_REGISTER 0
#define LED_R_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_R_CAPTURE 0
#define LED_R_DATA_WIDTH 1
#define LED_R_DO_TEST_BENCH_WIRING 0
#define LED_R_DRIVEN_SIM_VALUE 0
#define LED_R_EDGE_TYPE "NONE"
#define LED_R_FREQ 50000000
#define LED_R_HAS_IN 0
#define LED_R_HAS_OUT 1
#define LED_R_HAS_TRI 0
#define LED_R_IRQ -1
#define LED_R_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED_R_IRQ_TYPE "NONE"
#define LED_R_NAME "/dev/led_r"
#define LED_R_RESET_VALUE 0
#define LED_R_SPAN 16
#define LED_R_TYPE "altera_avalon_pio"


/*
 * onchip_memory2_0 configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_memory2_0 altera_avalon_onchip_memory2
#define ONCHIP_MEMORY2_0_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_MEMORY2_0_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_MEMORY2_0_BASE 0x2000
#define ONCHIP_MEMORY2_0_CONTENTS_INFO ""
#define ONCHIP_MEMORY2_0_DUAL_PORT 0
#define ONCHIP_MEMORY2_0_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_INIT_CONTENTS_FILE "lcd_onchip_memory2_0"
#define ONCHIP_MEMORY2_0_INIT_MEM_CONTENT 1
#define ONCHIP_MEMORY2_0_INSTANCE_ID "NONE"
#define ONCHIP_MEMORY2_0_IRQ -1
#define ONCHIP_MEMORY2_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_MEMORY2_0_NAME "/dev/onchip_memory2_0"
#define ONCHIP_MEMORY2_0_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_MEMORY2_0_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_MEMORY2_0_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_MEMORY2_0_SINGLE_CLOCK_OP 0
#define ONCHIP_MEMORY2_0_SIZE_MULTIPLE 1
#define ONCHIP_MEMORY2_0_SIZE_VALUE 8192
#define ONCHIP_MEMORY2_0_SPAN 8192
#define ONCHIP_MEMORY2_0_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_MEMORY2_0_WRITABLE 1


/*
 * uart_main configuration
 *
 */

#define ALT_MODULE_CLASS_uart_main altera_avalon_uart
#define UART_MAIN_BASE 0x5020
#define UART_MAIN_BAUD 115200
#define UART_MAIN_DATA_BITS 8
#define UART_MAIN_FIXED_BAUD 1
#define UART_MAIN_FREQ 50000000
#define UART_MAIN_IRQ 1
#define UART_MAIN_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_MAIN_NAME "/dev/uart_main"
#define UART_MAIN_PARITY 'N'
#define UART_MAIN_SIM_CHAR_STREAM ""
#define UART_MAIN_SIM_TRUE_BAUD 0
#define UART_MAIN_SPAN 32
#define UART_MAIN_STOP_BITS 1
#define UART_MAIN_SYNC_REG_DEPTH 2
#define UART_MAIN_TYPE "altera_avalon_uart"
#define UART_MAIN_USE_CTS_RTS 0
#define UART_MAIN_USE_EOP_REGISTER 0

#endif /* __SYSTEM_H_ */
