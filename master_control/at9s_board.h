/*
 * This file is part of the MasterControl project.
 *
 * Copyright (C) 2017 Mario Gomez <mario.gomez@teubi.co>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>
#include <libopencm3/stm32/gpio.h>

#ifndef AT9S_BOARD_H
#define AT9S_BOARD_H

struct GPIO_DEF_t {
  uint32_t port;
  uint16_t gpios;
};

// Helper macro to simplify port access
#define GPIO_DEF(GPIOPORT, GPIOS) (struct GPIO_DEF_t){GPIOPORT, GPIOS}

/** Definitions for GPIOA **/
#define CH1        GPIO_DEF(GPIOA, GPIO0)
#define CH2        GPIO_DEF(GPIOA, GPIO1)
#define CH3        GPIO_DEF(GPIOA, GPIO2)
#define CH4        GPIO_DEF(GPIOA, GPIO3)
#define POT1       GPIO_DEF(GPIOA, GPIO4)
#define POT2       GPIO_DEF(GPIOA, GPIO5)
#define POT3       GPIO_DEF(GPIOA, GPIO6)
#define IO0        GPIO_DEF(GPIOA, GPIO7)
#define K8H        GPIO_DEF(GPIOA, GPIO8)
#define TX         GPIO_DEF(GPIOA, GPIO9)
#define RX         GPIO_DEF(GPIOA, GPIO10)
#define IO1        GPIO_DEF(GPIOA, GPIO11)
#define IO2        GPIO_DEF(GPIOA, GPIO12)
#define LED_GREEN  GPIO_DEF(GPIOA, GPIO13)
#define ENTER      GPIO_DEF(GPIOA, GPIO14)
#define EXIT       GPIO_DEF(GPIOA, GPIO15)

/** Definitions for GPIOB **/
#define POT4       GPIO_DEF(GPIOB, GPIO0)
#define BATT       GPIO_DEF(GPIOB, GPIO1)
#define IO3        GPIO_DEF(GPIOB, BPIO2)
#define TRL        GPIO_DEF(GPIOB, GPIO3)
#define TRR        GPIO_DEF(GPIOB, GPIO4)
#define TLU        GPIO_DEF(GPIOB, GPIO5)
#define TLD        GPIO_DEF(GPIOB, GPIO6)
#define PC_OUT     GPIO_DEF(GPIOB, GPIO7)
#define PC_IN      GPIO_DEF(GPIOB, GPIO8)
#define DISP_PWM   GPIO_DEF(GPIOB, GPIO9)
#define IO4        GPIO_DEF(GPIOB, GPIO10)
#define REST       GPIO_DEF(GPIOB, GPIO11)
#define CSN        GPIO_DEF(GPIOB, GPIO12)
#define SCK        GPIO_DEF(GPIOB, GPIO13)
#define MISO       GPIO_DEF(GPIOB, GPIO14)
#define MOSI       GPIO_DEF(GPIOB, GPIO15)

/** Definitions for GPIOC **/
#define K1A        GPIO_DEF(GPIOC, GPIO0)
#define K2B        GPIO_DEF(GPIOC, GPIO1)
#define K3C1       GPIO_DEF(GPIOC, GPIO2)
#define K3C2       GPIO_DEF(GPIOC, GPIO3)
#define K5E1       GPIO_DEF(GPIOC, GPIO4)
#define K5E2       GPIO_DEF(GPIOC, GPIO5)
#define K4D        GPIO_DEF(GPIOC, GPIO6)
#define K6F        GPIO_DEF(GPIOC, GPIO7)
#define K7G1       GPIO_DEF(GPIOC, GPIO8)
#define K7G2       GPIO_DEF(GPIOC, GPIO9)
#define SDA        GPIO_DEF(GPIOC, GPIO10)
#define SCL        GPIO_DEF(GPIOC, GPIO11)
#define VIBRATOR   GPIO_DEF(GPIOC, GPIO12)
#define ENC_L      GPIO_DEF(GPIOC, GPIO13)
#define ENC_R      GPIO_DEF(GPIOC, GPIO14)
#define ENC_BTN    GPIO_DEF(GPIOC, GPIO15)

/** Definitions for GPIOD **/
#define DISP5      GPIO_DEF(GPIOD, GPIO0)
#define DISP6      GPIO_DEF(GPIOD, GPIO1)
#define TRU        GPIO_DEF(GPIOD, GPIO2)
#define TRD        GPIO_DEF(GPIOD, GPIO3)
#define DISP21     GPIO_DEF(GPIOD, GPIO4)
#define DISP22     GPIO_DEF(GPIOD, GPIO5)
#define IO5        GPIO_DEF(GPIOD, GPIO6)
#define DISP20     GPIO_DEF(GPIOD, GPIO7)
#define DISP16     GPIO_DEF(GPIOD, GPIO8)
#define DISP17     GPIO_DEF(GPIOD, GPIO9)
#define DISP18     GPIO_DEF(GPIOD, GPIO10)
#define DISP23     GPIO_DEF(GPIOD, GPIO11)
#define TLL        GPIO_DEF(GPIOD, GPIO12)
#define TLR        GPIO_DEF(GPIOD, GPIO13)
#define DISP3      GPIO_DEF(GPIOD, GPIO14)
#define DISP4      GPIO_DEF(GPIOD, GPIO15)

/** Defines for GPIOE **/
#define DISP19     GPIO_DEF(GPIOE, GPIO0)
#define LED_RED    GPIO_DEF(GPIOE, GPIO1)
#define BUZZER     GPIO_DEF(GPIOE, GPIO2)
#define IO6        GPIO_DEF(GPIOE, GPIO3)
#define IO7        GPIO_DEF(GPIOE, GPIO4)
#define IO8        GPIO_DEF(GPIOE, GPIO5)
#define IO9        GPIO_DEF(GPIOE, GPIO6)
#define DISP7      GPIO_DEF(GPIOE, GPIO7)
#define DISP8      GPIO_DEF(GPIOE, GPIO8)
#define DISP9      GPIO_DEF(GPIOE, GPIO9)
#define DISP10     GPIO_DEF(GPIOE, GPIO10)
#define DISP11     GPIO_DEF(GPIOE, GPIO11)
#define DISP12     GPIO_DEF(GPIOE, GPIO12)
#define DISP13     GPIO_DEF(GPIOE, GPIO13)
#define DISP14     GPIO_DEF(GPIOE, GPIO14)
#define DISP15     GPIO_DEF(GPIOE, GPIO15)

void at9s_gpio_clear(struct GPIO_DEF_t);
void at9s_gpio_set(struct GPIO_DEF_t);
uint8_t at9s_gpio_read(struct GPIO_DEF_t);
void at9s_gpio_toggle(struct GPIO_DEF_t);
void at9s_gpio_set_mode(struct GPIO_DEF_t, uint8_t, uint8_t);

#endif
