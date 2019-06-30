/*
 * Pin_Map.h
 *
 * Created: 5/12/2019 8:09:08 PM
 *  Author: mosta
 */ 


#ifndef PIN_MAP_H_
#define PIN_MAP_H_

//#include "Lib/MstrPinMap.h"

#define PA02 14
#define PA03 4
#define PA04 17
#define PA05 19
#define PA06 8
#define PA07 9
#define PA08 4
#define PA09 3
#define PA10 1
#define PA11 0
#define PA12 21
#define PA13 22
#define PA14 2
#define PA15 5
#define PA16 11
#define PA17 13
#define PA18 10
#define PA19 12
#define PA20 6
#define PA21 7
#define PA22 31
#define PA23 32
#define PA24 33
#define PA25 34
#define PA26 39
#define PA27 26
#define PA28 27

#define PB02 20
#define PB03 25

#define PB08 15
#define PB09 16
#define PB10 23
#define PB11 24

#define PB22 30
#define PB23 31



uint8_t AudioOut_2 = PA02;
uint8_t AudioOut_4 = PA04;
uint8_t AudioOut_5 = PA05;

uint8_t Button_1 = PA06;
uint8_t Button_2 = PA12;
uint8_t Button_3 = PA15;

uint8_t BattADC1 = PA07;
uint8_t BattADC2 = PA08;
uint8_t BattADC3 = PA09;

uint8_t IMU_INT2_16 = PA16;
uint8_t IMU_INT2_17 = PA17;
uint8_t IMU_INT2_18 = PA18;

uint8_t IMU_INT1_19 = PA19;
uint8_t IMU_INT1_20 = PA20;
uint8_t IMU_INT1_21 = PA21;

uint8_t LED = PB22;


#endif /* PIN_MAP_H_ */