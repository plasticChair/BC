
#include "BulletCounter.h"



SAMD21Timers T3 = SAMD21Timers(3,3,4);

#define OLED_RESET 4


unsigned long previousMillis = 0;
unsigned long interval = 200;
const int chipSelect = 10;
float shuntvoltage = 0;
float busvoltage = 0;
float current_mA = 0;
float loadvoltage = 0;
float energy = 0;

bool updateCounter = false;
#define TestCh 1
	int ii = 0;

void setup() 
{
	T3.configure(50, 0);
	T3.startCounter();
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  detachInterrupt(digitalPinToInterrupt(IMU_INT1_19));
  
}

void loop() {
	
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval)
  {
    previousMillis = currentMillis;
    displaydata(ii);
	ii++;
  }
  if (ii > 99) ii= 0;
  
  if (updateCounter)
  {
	  ii--;
  }
}


void IMUISR()
{
	detachInterrupt(digitalPinToInterrupt(IMU_INT1_19));
	EIC->EVCTRL.bit.EXTINTEO2 = 0;
	
	if (T3.getCount() > 200)
	{
		T3.restart();
		updateCounter = true;
		
	}

	EIC->EVCTRL.bit.EXTINTEO2 = 1;
	attachInterrupt(digitalPinToInterrupt(IMU_INT1_19), IMUISR, HIGH);
	
}
