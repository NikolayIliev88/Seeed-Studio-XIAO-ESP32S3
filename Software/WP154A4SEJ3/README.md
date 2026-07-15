# XIAO ESP32S3 RGB LED & Sensor Project

A structured hardware implementation featuring the Seeed Studio XIAO ESP32S3 microcontroller to interface with a common cathode RGB LED and a DHT22 environmental sensor.

---
## 🛠️ Components Needed For Xiao Cathode Rgb Driver

| Component | Quantity | Description |
| :--- | :---: | :--- |
| **Seeed Studio XIAO ESP32S3** | 1 | Microcontroller (with pre-soldered pins) |
| **WP154A4SEJ3** | 1 | Common Cathode (4 pins) |
| **RW25CF 200R** | 3 | Current limiting resistors for protection |
| **Breadboard** | 1 | Standard half-size or full-size |
| **Jumper Wires** | 2 | Male-to-Male hookup wires |



## 🔌 Connections

Below is the wiring map for connecting the DHT22 sensor to the microcontroller:

| Seeed Studio XIAO ESP32S3 | RGB LED Diode | Description |
| :--- | :--- | :--- |
| **D0** | Pin 1 (Red Leg) | Controls the Red color channel |
| **GND** | Pin 2 (Longest Leg) | Common Ground (Cathode) connection |
| **D1** | Pin 3 (Green Leg) | Controls the Green color channel |
| **D2** | Pin 4 (Blue Leg) | Controls the Blue color channel |
                    

<img width="600" height="600" alt="image" src="https://github.com/user-attachments/assets/1a7a2d3f-d2a2-4290-a197-4a362c32d756" />

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
