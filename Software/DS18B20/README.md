# DS18B20 Temperature Sensor Project

This folder contains the code, libraries, and documentation for interfacing the **DS18B20 Digital Temperature Sensor** with my microcontroller.

<img width="1395" height="1359" alt="image" src="https://github.com/user-attachments/assets/97f6c09a-13bb-4a77-9f54-450647dfb4de" />

## 🛠️ Components Needed For Real-Time Temperature Monitor

| Component | Quantity | Description |
| :--- | :---: | :--- |
| **DS18B20** | 1 | Digital temperature sensor (either TO-92 transistor style or waterproof probe style) |
| **RW25MF 4.7K (Sensor)** | 1 | Pull-up resistor connected between the DS18B20 VDD and DQ (data) lines |
| **Jumper Wires** | 3 | Male-to-Male or Male-to-Female hookup wires for breadboard connections |

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
1. **OneWire** (by Paul Stoffregen)    https://github.com/PaulStoffregen/OneWire
2. **DallasTemperature** (by Miles Burton)  https://github.com/dnrce/DallasTemperature

---

## 🚀 How to Use

1. Wire up the sensor according to the table above.
2. Open the `.ino` (or `.py`) file inside this folder.
3. Upload the code to your board.
4. Open your Serial Monitor (set to `115200` or `9600` baud) to see the temperature readings.
