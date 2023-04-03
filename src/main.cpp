#include <Arduino.h>
#include <TimerOne.h>

#include "ConfigGPIO.h"



void setup() 
{

 // Start Serial port communication
	Serial.begin(9600);
	Serial.print("Initialize USART. \t");
	Serial.println(millis());
}



void loop() 
{
}