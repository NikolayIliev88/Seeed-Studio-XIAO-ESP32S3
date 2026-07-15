# Real-Time Temperature Monitor (DS18B20 + WEA012864DLPP3 OLED)

This project reads ambient temperature data from a **DS18B20 1-Wire temperature sensor** and displays it in real-time (both Celsius and Fahrenheit) on a **Winstar WEA012864DLPP3 0.96" OLED display**.

---
<img width="244" height="240" alt="image" src="https://github.com/user-attachments/assets/39294737-88bd-4add-83e6-3bcc04172e05" />


## 🛠️ Hardware Requirements

* **Microcontroller:** Arduino (Uno, Nano, Mega) or ESP32 / ESP8266
* **Sensor:** DS18B20 Digital Temperature Sensor
* **Resistor:** 4.7kΩ Pull-Up Resistor (required for the 1-Wire data line)
* **Display:** WEA012864DLPP3 0.96" OLED Screen (SSD1306, I2C, 128x64 resolution)
* **Other:** Breadboard and jumper wires

---

## 🔌 Wiring Diagram & Connections

The DS18B20 (1-Wire protocol) and the OLED display (I2C protocol) are connected to the microcontroller simultaneously.

### 1. Circuit Connections Table

| Component | Pin Name | Microcontroller Pin (e.g., Arduino Uno) | Connection Notes |
| :--- | :--- | :--- | :--- |
| **DS18B20** | GND | GND | Common ground |
| **DS18B20** | DQ (Data) | **Digital Pin 2** | Needs a **4.7kΩ pull-up resistor** connected to VCC |
| **DS18B20** | VDD (Power)| 5V (or 3.3V) | Power supply |
| **OLED** | GND | GND | Common ground |
| **OLED** | VCC | 5V (or 3.3V) | Power supply |
| **OLED** | SCL | **SCL (A5)** | I2C Clock Line |
| **OLED** | SDA | **SDA (A4)** | I2C Data Line |

> ⚠️ **CRITICAL WIRING NOTE:** Place the **4.7kΩ resistor** between the DS18B20's **DQ (Data)** wire and the **VDD (Power)** wire. Without this pull-up resistor, the microcontroller will not detect the temperature sensor.

---

## 📚 Required Libraries

Before compiling the code, make sure you have installed the following libraries via your IDE's Library Manager:

* **OneWire** (by Paul Stoffregen) — Manages the 1-Wire protocol for the DS18B20.
* **DallasTemperature** (by Miles Burton) — Translates raw sensor data into temperature readings.
* **Adafruit SSD1306** (by Adafruit) — Hardware driver for the WEA012864DLPP3 screen.
* **Adafruit GFX Library** (by Adafruit) — Handles the layout, text, and drawing shapes on the screen.

---

## 🚀 How to Run the Project

1. **Wire the Hardware:** Follow the pinout table above to connect the sensor, resistor, and OLED display.
2. **Open the Code:** Upload the main project sketch (`OLED_Temp_Monitor.ino`) to your board.
3. **Check the Screen:** * Upon boot, the screen will display a splash message saying *"Temp Sensor Sync..."*.
   * After 2 seconds, it will begin displaying live temperature readings in Celsius ($^\circ\text{C}$) and Fahrenheit ($^\circ\text{F}$).
4. **Troubleshooting:**
   * If the display screen remains blank, check that your I2C address is correctly set to `0x3C` in the code.
   * If the display shows **"Sensor Error!"**, verify your 4.7kΩ resistor connection and ensure the sensor's DQ pin is properly connected to Digital Pin 2.
