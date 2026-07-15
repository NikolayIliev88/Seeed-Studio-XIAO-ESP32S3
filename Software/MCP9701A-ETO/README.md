# MCP9701A-E/TO Analog Temperature Sensor

An easy-to-use guide and implementation for interfacing the Microchip **MCP9701A-E/TO** Low-Power Linear Active Thermistor with an Arduino. Unlike digital sensors or raw thermistors, the MCP9701A outputs a linear analog voltage directly proportional to temperature, requiring no complex math libraries.

---

<img width="1204" height="460" alt="image" src="https://github.com/user-attachments/assets/2aa54323-7cb2-4be1-a231-4aa56917a483" />


## 🛠️ Components Needed For Analog Temperature Monitor

| Component | Quantity | Description |
| :--- | :--- | :--- |
| **MCP9701A-E/TO Sensor** | 1 | Low-power active thermistor (TO-92-3 transistor style package) |
| **0.1µF Ceramic Capacitor** | 1 | Bypass capacitor placed close to the sensor's power pins to filter analog noise |
| **Microcontroller** | 1 | Arduino Uno, Nano, or any board with an Analog-to-Digital Converter (ADC) |
| **Jumper Wires** | 3 | Male-to-Male or Male-to-Female hookup wires for breadboard connections |

---

## 🔌 Wiring Connections

Looking at the **flat side** of the MCP9701A (with the text/markings facing you), the pins from left to right are: **1 (V_DD), 2 (V_OUT), and 3 (GND)**.

| Component Pin | Pin Name | Microcontroller Pin (e.g., Arduino Uno) | Connection Notes |
| :--- | :--- | :--- | :--- |
| **MCP9701A Pin 1** | $V_{DD}$ (Power) | 5V (or 3.3V) | Main power input (3.1V to 5.5V supported) |
| **MCP9701A Pin 2** | $V_{OUT}$ (Signal) | Analog Pin A0 | Analog voltage output proportional to temperature |
| **MCP9701A Pin 3** | GND (Ground) | GND | Common ground connection |

---

> ⚠️Optional Recommendation: Adding a 0.1 µF ceramic capacitor between Pin 1 and Pin 3 (GND), positioned close to the sensor, can improve measurement stability by filtering high-frequency power supply noise. The sensor will function without this capacitor, but it may help produce more consistent analog temperature readings.
---

## 📚 Required Libraries

Because the MCP9701A is a purely analog sensor, **no external libraries are required** to read it! You only need standard built-in Arduino functions (`analogRead()`), making it extremely lightweight and compatible with any microcontroller.

---

## 📐 Mathematical Theory

The sensor outputs voltage linearly based on this transfer function:

$$V_{OUT} = (T_{C} \times T_{A}) + V_{0\text{C}}$$

Where:
* $T_{C}$ (Temperature Coefficient/Slope) = $19.53\text{ mV/°C}$ ($0.01953\text{ V/°C}$)
* $V_{0\text{C}}$ (Voltage Offset at 0°C) = $400\text{ mV}$ ($0
