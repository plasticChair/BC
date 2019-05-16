/*
 * BulletCounter.cpp
 *
 * Created: 5/11/2019 1:27:16 AM
 *  Author: mosta
 */ 
#include <Wire.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(4);

void displaydata() {
	display.clearDisplay();

	display.setTextSize(1);
	display.setCursor(0, 0);
	display.println(99);
	display.setCursor(35, 0);
	display.println("V");
	display.setCursor(50, 0);
	display.println(21);
	display.setCursor(95, 0);
	display.println("mA");
	display.setCursor(0, 10);
	display.println(23);
	display.setCursor(65, 10);
	display.println("mW");
	display.setCursor(0, 20);
	display.println(3);
	display.setCursor(65, 20);
	display.println("mWh");
	display.display();
}