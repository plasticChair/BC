#include "..\..\..\C_code\SAMD21\SAMD21Timers.h"
#include "OLED_Cntrl.h"
#include "SparkFunLSM6DS3.h"
#include "Pin_Map.h"
#include "Wire.h"



void IMUISR();
void Button1_ISR();
void Button2_ISR();
void Button3_ISR();