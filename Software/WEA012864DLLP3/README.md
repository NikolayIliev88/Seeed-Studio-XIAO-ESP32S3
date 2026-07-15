# Real-Time Temperature Monitor (DS18B20 + WEA012864DLPP3 OLED)

This project reads ambient temperature data from a **DS18B20 1-Wire temperature sensor** and displays it in real-time (both Celsius and Fahrenheit) on a **Winstar WEA012864DLPP3 0.96" OLED display**.

---

<img width="447" height="447" alt="image" src="https://github.com/user-attachments/assets/e9711a4d-bcad-4be5-b772-74c2318b0915" />


## 🛠️ Components Needed For Real-Time Temperature Monitor

| Component | Quantity | Description |
| :--- | :---: | :--- |
| **DS18B20** | 1 | Digital temperature sensor (either TO-92 transistor style or waterproof probe style) |
| **WEA012864DLPP3 OLED** | 1 | Winstar 0.96" I2C OLED display (SSD1306 driver, 128x64 resolution) |
| **RW25MF 4.7K (Sensor)** | 1 | Pull-up resistor connected between the DS18B20 VDD and DQ (data) lines |
| **4.7kΩ or 10kΩ Resistors (Screen)** | 2 | Pull-up resistors for the I2C lines (SDA and SCL) to improve signal integrity and screen response times |
| **Jumper Wires** | 9 | Male-to-Male or Male-to-Female hookup wires for breadboard connections |

---

## 🔌 Wiring Connections

| Component | Pin Name | Microcontroller Pin (e.g., Arduino Uno) | Connection Notes |
| :--- | :--- | :--- | :--- |
| **DS18B20** | GND | GND | Common ground |
| **DS18B20** | DQ (Data) | **Digital Pin 2** | Needs a **4.7kΩ pull-up resistor** connected to VCC |
| **DS18B20** | VDD (Power)| 5V (or 3.3V) | Power supply |
| **OLED** | GND | GND | Common ground |
| **OLED** | VCC | 5V (or 3.3V) | Power supply |
| **OLED** | SCL | **SCL (A5)** | I2C Clock Line (Requires pull-up resistor to VCC) |
| **OLED** | SDA | **SDA (A4)** | I2C Data Line (Requires pull-up resistor to VCC) |
> ⚠️ **CRITICAL WIRING NOTE:** Place the **4.7kΩ resistor** between the DS18B20's **DQ (Data)** wire and the **VDD (Power)** wire. Without this pull-up resistor, the microcontroller will not detect the temperature sensor.

---

## 📚 Required Libraries

Before compiling the code, make sure you have installed the following libraries via your IDE's Library Manager:

* **OneWire** (by Paul Stoffregen) — Manages the 1-Wire protocol for the DS18B20.                               https://github.com/PaulStoffregen/OneWire
* **DallasTemperature** (by Miles Burton) — Translates raw sensor data into degrees.                  https://github.com/dnrce/DallasTemperature
* **Adafruit SSD1306** (by Adafruit) — Hardware driver for the WEA012864DLPP3 screen.                     https://github.com/adafruit/adafruit_ssd1306
* **Adafruit GFX Library** (by Adafruit) — Handles the layout, text, and drawing shapes.       https://github.com/adafruit/Adafruit-gfx-library   

---

## 🚀 How to Run the Project

1. **Wire the Hardware:** Follow the pinout table above to connect the sensor, resistor, and OLED display.
2. **Open the Code:** Upload the main project sketch (`OLED_Temp_Monitor.ino`) to your board.
3. **Check the Screen:** * Upon boot, the screen will display a splash message saying *"Temp Sensor Sync..."*.
   * After 2 seconds, it will begin displaying live temperature readings in Celsius ($^\circ\text{C}$) and Fahrenheit ($^\circ\text{F}$).
4. **Troubleshooting:**
   * If the display screen remains blank, check that your I2C address is correctly set to `0x3C` in the code.
   * If the display shows **"Sensor Error!"**, verify your 4.7kΩ resistor connection and ensure the sensor's DQ pin is properly connected to Digital Pin 2.
