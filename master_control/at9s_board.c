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
#include "at9s_board.h"

void at9s_gpio_clear(struct GPIO_DEF_t gpiodef) {
  gpio_clear(gpiodef.port, gpiodef.gpios); 
}

void at9s_gpio_set(struct GPIO_DEF_t gpiodef) {
  gpio_set(gpiodef.port, gpiodef.gpios);  
}

uint8_t at9s_gpio_read(struct GPIO_DEF_t gpiodef) {
  return (gpio_get(gpiodef.port, gpiodef.gpios)>0);
}

void at9s_gpio_toggle(struct GPIO_DEF_t gpiodef) {
  gpio_toggle(gpiodef.port, gpiodef.gpios);
}

void at9s_gpio_set_mode(struct GPIO_DEF_t gpiodef, uint8_t mode, uint8_t cnf) {
  gpio_set_mode(gpiodef.port, mode, cnf, gpiodef.gpios);
}

