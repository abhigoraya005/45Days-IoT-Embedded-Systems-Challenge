# Day 5 - Smart Plant Monitoring System 🌱

## Project Overview

This project is a Smart Plant Monitoring System developed using Arduino Uno and a Soil Moisture Sensor.

The system continuously monitors soil moisture levels and alerts the user when the plant needs water using an LED indicator and buzzer alert system.

This project demonstrates environmental monitoring, sensor interfacing, and basic smart agriculture concepts using Embedded Systems and IoT fundamentals.

---

# Components Used

* Arduino Uno
* Soil Moisture Sensor
* LED
* Active Buzzer
* Breadboard
* Jumper Wires
* Plant Pot

---

# Features

✅ Real-time soil moisture monitoring
✅ Dry soil detection system
✅ LED water alert indicator
✅ Buzzer notification system
✅ Embedded environmental sensing
✅ Smart agriculture concept implementation

---

# Circuit Connections

## Soil Moisture Sensor → Arduino Uno

| Sensor Pin | Arduino Pin |
| ---------- | ----------- |
| VCC        | 5V          |
| GND        | GND         |
| AO         | A0          |

---

## LED → Arduino Uno

| LED Pin  | Arduino Pin |
| -------- | ----------- |
| Positive | 7           |
| Negative | GND         |

---

## Buzzer → Arduino Uno

| Buzzer Pin | Arduino Pin |
| ---------- | ----------- |
| VCC        | 5V          |
| GND        | GND         |
| I/O        | 8           |

---

# Working Principle

1. Soil moisture sensor continuously reads moisture level from the plant soil.
2. Arduino processes sensor values in real time.
3. If soil becomes dry:

   * LED indicator turns ON
   * Buzzer alert activates
4. If moisture is normal:

   * System remains in monitoring mode.

---

# System Flowchart

```text id="p7x1lc"
        START
           |
           v
 Initialize System
           |
           v
 Read Soil Moisture Value
           |
           v
 Is Soil Dry?
      /        \
    YES         NO
    /             \
   v               v
LED ON         Continue
Buzzer ON      Monitoring
   |
   v
Water Plant Alert
```

---

# Arduino Code Logic

The Arduino continuously reads analog values from the soil moisture sensor and compares them with a predefined threshold value.

If the soil moisture value exceeds the dry-soil threshold:

* LED turns ON
* Buzzer gives alert

Otherwise:

* System keeps monitoring soil condition.

---

# Learning Outcomes

Through this project, I learned:

* Soil moisture sensing
* Analog sensor interfacing
* Environmental monitoring systems
* Arduino automation logic
* Smart agriculture fundamentals
* Embedded system based alert mechanisms

---

# Real-World Applications

* Smart Farming
* Automatic Irrigation Systems
* Greenhouse Monitoring
* Smart Gardening
* Precision Agriculture

---

# Future Improvements

* Automatic Water Pump System
* ESP32 WiFi Monitoring
* Firebase Cloud Integration
* Mobile App Notifications
* IoT Dashboard for Plant Health

---

# Project Images

## Circuit Setup

(Add your circuit image here)

## Smart Plant Monitoring System

(Add your project setup image here)

---

# Conclusion

This project helped me understand how Embedded Systems and IoT concepts can be applied in agriculture and environmental monitoring systems for smarter and more efficient plant care.
