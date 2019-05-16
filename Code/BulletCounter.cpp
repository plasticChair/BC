
#include "BulletCounter.h"




//#include <SdFat.h>
//SdFat SD;


unsigned long previousMillis = 0;
unsigned long interval = 100;
const int chipSelect = 10;
float shuntvoltage = 0;
float busvoltage = 0;
float current_mA = 0;
float loadvoltage = 0;
float energy = 0;
//File TimeFile;
//File VoltFile;
//File CurFile;

#define TestCh 1


void setup() {
 // SD.begin(chipSelect);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  
}

void loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval)
  {
    previousMillis = currentMillis;
   

  /*  TimeFile = SD.open("TIME.txt", FILE_WRITE);
    if (TimeFile) {
      TimeFile.println(currentMillis);
      TimeFile.close();
    }

    VoltFile = SD.open("VOLT.txt", FILE_WRITE);
    if (VoltFile) {
      VoltFile.println(loadvoltage);
      VoltFile.close();
    }

    CurFile = SD.open("CUR.txt", FILE_WRITE);
    if (CurFile) {
      CurFile.println(current_mA);
      CurFile.close();
    }
    */
    displaydata();
  }
}

