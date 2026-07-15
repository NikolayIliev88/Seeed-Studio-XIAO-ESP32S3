# DS18B20 Temperature Sensor Project

This folder contains the code, libraries, and documentation for interfacing the **DS18B20 Digital Temperature Sensor** with my microcontroller.

<img width="1395" height="1359" alt="image" src="https://github.com/user-attachments/assets/97f6c09a-13bb-4a77-9f54-450647dfb4de" />

## 📌 Sensor Overview
* **Type:** 1-Wire digital temperature sensor
* **Operating Voltage:** 3.0V to 5.5V
* **Accuracy:** ±0.5°C (from -10°C to +85°C)
* **Resolution:** 9 to 12-bit (user-selectable)

---

## 🔌 Wiring Connection

The DS18B20 uses a 1-Wire bus, which means it only needs one data pin. 

> **Important:** You must connect a **4.7kΩ pull-up resistor** between the VDD (Power) and DQ (Data) lines to get reliable readings.

| DS18B20 Pin | Microcontroller Pin (e.g., Arduino/ESP32) | Notes |
| :--- | :--- | :--- |
| **GND** (Black/Left) | GND | Ground |
| **DQ / Data** (Yellow/Middle) | Pin D2 (or any digital pin) | Pull-up resistor connected to VDD |
| **VDD** (Red/Right) | 3.3V or 5V | Power supply |

---

## 🛠️ Required Libraries

To run the code in this folder, you will need to install the following libraries in your IDE:
1. **OneWire** (by Paul Stoffregen)
2. **DallasTemperature** (by Miles Burton)

---

## 🚀 How to Use

1. Wire up the sensor according to the table above.
2. Open the `.ino` (or `.py`) file inside this folder.
3. Upload the code to your board.
4. Open your Serial Monitor (set to `115200` or `9600` baud) to see the temperature readings.
