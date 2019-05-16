

#include <Arduino.h>

#include "SparkFunBME280_I2C.h"
#include <SparkFunLSM6DS3.h>
#include "Wire.h"

BME280                   BME;
LSM6DS3 myIMU;

void setup_BME280();
void BME_Force();
