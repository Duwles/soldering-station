#ifndef __HAL_H__
#define __HAL_H__

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <util/delay.h>

#include <Arduino.h>



typedef struct {
	volatile uint8_t *ddr_reg;
	volatile uint8_t *port_reg;
	volatile uint8_t *pin_reg;
	uint8_t pin_num;
} HAL_GPIO;






#endif //!__HAL_H__
