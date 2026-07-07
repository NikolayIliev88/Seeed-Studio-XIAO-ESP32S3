# XIAO ESP32S3 RGB LED & Sensor Project

A structured hardware implementation featuring the Seeed Studio XIAO ESP32S3 microcontroller to interface with a common cathode RGB LED and a DHT22 environmental sensor.

---

## 🔌 Connections

Below is the wiring map for connecting the DHT22 sensor to the microcontroller:

| Seeed Studio XIAO ESP32S3 | DHT22 Sensor |
| :--- | :--- |
| **3V3** | Vcc |
| **D1 (GPIO 2)** | Data |
| **GND** | GND |

---

## 💻 Software Preparation

Follow these steps to configure your environment in the Arduino IDE before compiling the source code:

1. Add the ESP32 board package to your Arduino IDE. 
2. Navigate to **File > Preferences**, and fill the **Additional Boards Manager URLs** field with the URL below:
   `https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json`
3. Navigate to **Tools > Board > Boards Manager...**
4. Type the keyword `esp32` in the search box.
5. Select the latest version of **esp32 by Espressif Systems**, and click **Install**.
6. Set your target board via **Tools > Board > esp32 > Seeed XIAO ESP32S3**.
