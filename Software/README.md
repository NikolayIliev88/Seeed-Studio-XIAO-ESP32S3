# ESP32 Device Projects

This folder contains separate sketches for each individual device, as well as a combined project for the DS18B20 sensor and OLED display.

---

## 🔌 Projects

## 1. DS18B20 + WEA012864D OLED
*Reads temperature digitally and displays it on the screen.*

| ESP32 Pin | Device | Device Pin | Notes |
| :--- | :--- | :--- | :--- |
| **3V3** | DS18B20 & OLED | VDD / VCC | Shared Power |
| **GND** | DS18B20 & OLED | GND | Shared Ground |
| **GPIO 4** | DS18B20 | DQ (Data) | *Requires 4.7kΩ pull-up to 3V3* |
| **GPIO 21** | WEA012864D | SDA | I2C Data |
| **GPIO 22** | WEA012864D | SCL | I2C Clock |

## 2. DS18B20 (Digital Temp Sensor)
* **VDD** ➡️ ESP32 **3V3**
* **GND** ➡️ ESP32 **GND**
* **DQ (Data)** ➡️ ESP32 **GPIO 4** *(Requires 4.7kΩ pull-up resistor to 3V3)*

## 3. MCP9701A-ETO (Analog Temp Sensor)
* **VDD** ➡️ ESP32 **3V3**
* **GND** ➡️ ESP32 **GND**
* **VOUT** ➡️ ESP32 **GPIO 34** (Analog Input / ADC1)

## 4. WP154A4SEJ3 (Bi-Color LED)
* **Anode 1 (Red)** ➡️ ESP32 **GPIO 12** *(Use ~220Ω resistor)*
* **Anode 2 (Green)** ➡️ ESP32 **GPIO 13** *(Use ~220Ω resistor)*
* **Anode 3 (Blue)** ➡️ ESP32 **GPIO 14** *(Use ~220Ω resistor)*
* **Cathode** ➡️ ESP32 **GND**

---

## 🚀 How to Run
1. Open the specific project folder/sketch in your IDE.
2. Select your ESP32 board and COM port under **Tools**.
3. Click **Upload**. *(Hold the physical **BOOT** button on the ESP32 if the upload gets stuck on "Connecting...")*.
