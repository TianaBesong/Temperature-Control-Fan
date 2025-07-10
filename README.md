# Arduino Temperature-Controlled Fan System

This project simulates a **smart climate control system** using an Arduino Uno, designed to keep indoor spaces (like a living room) cool and comfortable. A temperature sensor monitors ambient heat, and once the temperature rises above a set threshold, the system automatically turns on a fan.

It’s a simple but effective example of analog input, conditional logic, transistor-controlled motor output, and LCD monitoring — perfect for learning embedded control systems.

---

# Concept

> As the family enjoyed the newfound garden luxury, they noticed the indoor temperature fluctuating. They decided to add a touch of climate control. As their engineer, you introduced an Analog Temperature Sensor Module and a fan into the system. Now, the living room could enjoy a gentle breeze automatically whenever things got too warm.

---

## Features

- ✅ Automatically turns on the fan when temperature exceeds a threshold (e.g., 28°C)
- 📟 Displays live temperature on an I2C 16x2 LCD
- ⚙️ Uses a transistor to safely drive a 9V-powered DC motor
- 🔋 Powered by a 9V battery for portability

---

## Components Used

| Component                  | Description                      |
|---------------------------|----------------------------------|
| Arduino Uno               | Microcontroller board            |
| TMP36 Temperature Sensor  | Analog sensor to read temp       |
| DC Motor (Fan)            | Output device for cooling        |
| NPN Transistor            | Drives motor safely from Arduino |
| LCD 16x2 (I2C, PCF8574)   | Displays temperature readings    |
| 9V Battery + Connector    | Power supply                     |
| Resistors & Breadboard    | For safe, structured connections |

---

## How It Works

1. The TMP36 sensor reads ambient temperature.
2. The Arduino converts the analog voltage to °C.
3. If the temperature exceeds the set threshold (e.g., 28°C), the Arduino:
   - Displays the temperature on the LCD
   - Sends a HIGH signal to the transistor base to power the motor
4. If temperature is below the threshold, the fan turns off.

---

## Files Included

- `temp_control_fan.ino` — Arduino sketch (code)
- `circuit-diagram.png` — Wiring diagram or screenshot from Tinkercad

---

##  Display Output Example

