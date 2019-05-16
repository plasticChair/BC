/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// Pin 11 has the LED on Teensy 2.0
// Pin 6  has the LED on Teensy++ 2.0
// Pin 13 has the LED on Teensy 3.0
// give it a name:
#include "TinyBeep_sensor.h"
float sampledTemp = 0;
float sampledPress = 0;

float sampleAccelX  =0;
float sampleAccelY  =0;
float sampleAccelZ  =0;

float sampleGyroX  =0;
float sampleGyroY  =0;
float sampleGyroZ  =0;

float sampledTempIMU = 0;


void setup() { 
	setup_BME280();
	//  myIMU.begin();

	
	delay(100);
    BME_Force();
}


void loop() {
 
    delay(2000);
BME_Force();



}

void setup_BME280()
{
	BME.settings.I2CAddress = 0x76;

	BME.settings.runMode = 1;
	BME.settings.filter = 1;
	BME.settings.tempOverSample = 1;
	BME.settings.pressOverSample = 1;
	BME.settings.humidOverSample = 1;

	BME.begin();
	//delay();

}


void BME_Force()
{
	uint8_t value = BME.readRegister(BME280_CTRL_MEAS_REG);
	value = (value & 0xFC) + 0x01;
	BME.writeRegister(BME280_CTRL_MEAS_REG, value);
	delay(10);
	sampledTemp  = BME.readTempC();
	sampledPress = BME.readFloatPressure()/100.0;
	

}