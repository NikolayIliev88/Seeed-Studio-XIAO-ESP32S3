# MCP9701A-E/TO Analog Temperature Sensor

An Arduino-compatible library/guide for interfacing with the Microchip **MCP9701A-E/TO** Low-Power Linear Active Thermistor IC in a TO-92-3 package.

Unlike standard negative temperature coefficient (NTC) thermistors, the MCP9701A does not require an external voltage divider or complex calibration curves (like Steinhart-Hart equations). It outputs an analog voltage directly proportional to the ambient temperature.

---

## Technical Specifications

| Parameter | Value |
| :--- | :--- |
| **Operating Voltage ($V_{DD}$)** | 3.1V to 5.5V |
| **Operating Current** | 6 µA (typical) / 12 µA (max) |
| **Sensing Temperature Range** | -10°C to +125°C |
| **Accuracy** | ±2°C from 0°C to +70°C (MCP9701A variant) |
| **Linear Temperature Slope** | 19.53 mV/°C |
| **DC Voltage Offset ($V_{0\text{C}}$)** | 400 mV (at 0°C) |
| **Package Type** | TO-92-3 (Through-Hole) |

---

## Pinout Configuration (TO-92-3 Package)

Looking at the **flat side** (with the text/markings facing you) from left to right:

```text
       ___
     /     \
    |  Flat |
    |  Side |
    |_______|
     |  |  |
     1  2  3
