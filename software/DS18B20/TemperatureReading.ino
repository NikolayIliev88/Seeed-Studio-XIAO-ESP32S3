#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 1

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup(void) {
  Serial.begin(9600);
  
  while (!Serial) { delay(10); } 
  
  Serial.println("DS18B20 Temperature Routine");
  sensors.begin();
}

void loop(void) { 
  sensors.requestTemperatures(); 
  
  float tempC = sensors.getTempCByIndex(0);
  
  if(tempC == DEVICE_DISCONNECTED_C) {
    Serial.println("Error: Could not read data. Check wiring/pull-up resistor!");
  } else {
    Serial.print("Temperature: ");
    Serial.print(tempC);
    Serial.println(" °C");
  }
  
  delay(2000);
}
