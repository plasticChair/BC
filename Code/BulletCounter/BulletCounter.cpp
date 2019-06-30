
#include "BulletCounter.h"
#include "wiring_private.h" // pinPeripheral() function
#define debugOUT Serial2

SAMD21Timers T4 = SAMD21Timers(4,3,6);
LSM6DS3 myIMU( I2C_MODE, 0x6b );


#define OLED_RESET 4
#define OLED_EN 0
uint8_t int1Status = 0;

unsigned long previousMillis = 0;
unsigned long interval = 800;
const int chipSelect = 10;
float shuntvoltage = 0;
float busvoltage = 0;
float current_mA = 0;
float loadvoltage = 0;
float energy = 0;

bool updateCounter = false;
#define TestCh 1
	int ii = 30;
	
bool LEDState = false;

bool B1State = false;
bool B2State = false;
bool B3State = false;


Uart Serial2( &sercom1, PA17, PA16, SERCOM_RX_PAD_1, UART_TX_PAD_0 ) ;


void SERCOM1_Handler()
{
	Serial2.IrqHandler();
}

void setup() 
{
	Wire.setClock(400000);
	debugOUT.begin(115200);
	  pinPeripheral(PA17, PIO_SERCOM);
	  pinPeripheral(PA16, PIO_SERCOM);
	//while(!debugOUT);
	delay(200);
	debugOUT.println("*****************");
	delay(100);
	myIMU.begin();
	//	T4.configure(1, 0);
	//	T4.startCounter();
	#if OLED_EN
	display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
	#endif
	
	delay(200);
	
	//attachInterrupt(digitalPinToInterrupt(IMU_INT1_19), IMUISR, RISING);
	detachInterrupt(digitalPinToInterrupt(IMU_INT1_19));
  
	pinMode(LED,OUTPUT);
  
//	pinMode(Button_1,INPUT);
//	pinMode(Button_2,INPUT);
//	pinMode(Button_3,INPUT);
  
	//attachInterrupt(digitalPinToInterrupt(Button_1), Button1_ISR, RISING);
//	attachInterrupt(digitalPinToInterrupt(Button_2), Button2_ISR, RISING);
//	attachInterrupt(digitalPinToInterrupt(Button_3), Button3_ISR, RISING);
  
  
	digitalWrite(LED,LEDState);
	delay(200);
	debugOUT.println("starting");
	delay(200);
  
}

void loop() {
	
  unsigned long currentMillis = millis();
 
  
  
  if (currentMillis - previousMillis >= interval)
  {
    previousMillis = currentMillis;
	#if OLED_EN
		 displaydata(ii);
	#endif
	ii--;
	
	debugOUT.println("here");
	
	debugOUT.println(myIMU.readFloatAccelX());
	debugOUT.println(myIMU.readFloatAccelY());
	debugOUT.println(myIMU.readFloatAccelZ());
		digitalWrite(LED,LEDState);
		LEDState = !LEDState;
  }
  if (ii == 0) ii= 30;
  
  if (updateCounter)
  {
	  ii--;
  }
  
  if (B1State){
	  debugOUT.println("Button 1 pressed");
	  B1State = false;
	  delay(20);
  }
    if (B2State){
	  debugOUT.println("Button 2 pressed");
	  B2State = false;
	  delay(20);
  }
    if (B3State){
	  debugOUT.println("Button 3 pressed");
	  B3State = false;
	  delay(20);
  }
}


void IMUISR()
{
	detachInterrupt(digitalPinToInterrupt(IMU_INT1_19));
	EIC->EVCTRL.bit.EXTINTEO2 = 0;
		int1Status++;
	if (T4.getCount() > 200)
	{
		T4.restart();
		updateCounter = true;
		
	}

	EIC->EVCTRL.bit.EXTINTEO2 = 1;
	attachInterrupt(digitalPinToInterrupt(IMU_INT1_19), IMUISR, HIGH);
	
}

void Button1_ISR()
{
		B1State = true;
		delay(10);
	
}

void Button2_ISR()
{
	B2State = true;
	delay(10);
	
}

void Button3_ISR()
{
	B3State = true;
	delay(10);
	
}