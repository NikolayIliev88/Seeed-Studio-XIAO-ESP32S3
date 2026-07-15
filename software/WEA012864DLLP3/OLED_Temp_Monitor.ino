#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Fonts/FreeSansBold9pt7b.h>
#include <OneWire.h>
#include <DallasTemperature.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C

#define OLED_SDA 3
#define OLED_SCL 2
#define ONE_WIRE_BUS 6

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup() {
  Wire.begin(OLED_SDA, OLED_SCL);
  sensors.begin();

  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3D)) {
      for(;;);
    }
  }

  display.setTextColor(SSD1306_WHITE); 
  display.setFont(&FreeSansBold9pt7b);
}

void loop() {
  sensors.requestTemperatures(); 
  float tempC = sensors.getTempCByIndex(0);

  display.clearDisplay();
  
  display.setCursor(0, 20);     
  display.print("Temp:");
  
  display.setCursor(0, 50);
  display.print(tempC, 1);
  display.print(" C");
  
  display.display();
  delay(1000);
}
