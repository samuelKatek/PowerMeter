#include <Arduino.h>
#include <EmonLib.h>

#define voltagePin 32
#define currentPin 33

EnergyMonitor powerMeter;

void setup()
{
  Serial.begin(9600);
  powerMeter.voltage(voltagePin, 234.26, 1.7);
  powerMeter.current(currentPin, 111.1);
}

void loop()
{
  powerMeter.calcVI(20, 2000);
  powerMeter.serialprint();
}