// OLED_Cntrl.h

#ifndef _OLED_CNTRL_h
#define _OLED_CNTRL_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include "customFont.h"
Adafruit_SSD1306 display(-1);


void displaydata(int ii) {
	char printChar[2];
	int  offsetChar = 0;

	display.clearDisplay();
	display.setRotation(2); 
	display.setTextColor(WHITE);
	display.setFont(&Orbitron_Bold_39);
	display.setTextSize(1);
	display.setCursor(35, 30);
	sprintf(printChar, "%02d",ii);
	display.println(printChar);

	display.display();

}

#endif

