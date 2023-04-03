#ifndef __CONFIG_GPIO_H__
#define __CONFIG_GPIO_H__
#include <Arduino.h>
#pragma once


// Pins mapping
#define SENSOR_PIN    		A0        	// tip temperature sense
#define VIN_PIN       		A1        	// input voltage sense
#define BUZZER_PIN     		9        	// buzzer

#define ENCDT_PIN   		3        	// rotary encoder 1
#define ENCCL_PIN    		4        	// rotary encoder 2
#define BUTTON_PIN     		5        	// rotary encoder switch
#define HEATON_PIN			7			// heater state led.

#define CONTROL_PIN    		6        	// heater MOSFET PWM control
#define SWITCH_PIN    		2        	// handle vibration switch

#define PWRLED_PIN  		8			// Power state led.


// Liquid Crystal I2C Setup
#define LCD_ADDR			0x24
#define LCD_COLS			16
#define LCD_ROWS 			2  

// EEPROM Ident flag for check memory integratet
#define EEPROM_IDENT 		0xfcab 		


#endif //! __CONFIG_GPIO_H__
