# Day 5 - RFID Attendance System 🔐

## Project Overview

This project is an RFID-based Attendance System developed using Arduino Uno and RC522 RFID Module.

The system detects RFID cards/tags, verifies authorized users using unique UID identification, and marks attendance with buzzer confirmation.

This project demonstrates authentication systems, embedded automation, and RFID-based access technologies commonly used in schools, offices, and smart security systems.

---

# Components Used

* Arduino Uno
* RC522 RFID Module
* RFID Card / Tag
* Active Buzzer
* Breadboard
* Jumper Wires

---

# Features

✅ RFID card scanning
✅ UID-based authentication
✅ Attendance marking system
✅ Buzzer confirmation alert
✅ Serial monitor attendance output
✅ Embedded security logic

---

# Circuit Connections

## RC522 RFID Module → Arduino Uno

| RFID Pin | Arduino Pin |
| -------- | ----------- |
| SDA      | 10          |
| SCK      | 13          |
| MOSI     | 11          |
| MISO     | 12          |
| RST      | 9           |
| GND      | GND         |
| 3.3V     | 3.3V        |

---

## Buzzer → Arduino Uno

| Buzzer Pin | Arduino Pin |
| ---------- | ----------- |
| VCC        | 5V          |
| GND        | GND         |
| I/O        | 8           |

---

# Working Principle

1. RFID card/tag is scanned using RC522 module.
2. System reads the unique UID of the RFID card.
3. UID is compared with stored authorized UID.
4. If UID matches:

   * Attendance is marked
   * Buzzer gives confirmation beep
5. Unauthorized cards are rejected.

---

# System Flowchart

```text id="p7x1lc"
        START
           |
           v
 Initialize RFID Module
           |
           v
   Scan RFID Card
           |
           v
 Read Card UID
           |
           v
 Compare UID with Stored UID
        /       \
      YES        NO
      /            \
     v              v
Attendance      Unauthorized
Marked             Card
     |              |
     v              v
Buzzer Beep     Access Denied
     |
     v
 Wait for Next Card
```

---

# Learning Outcomes

Through this project, I learned:

* RFID Technology Basics
* SPI Communication Protocol
* UID Authentication Logic
* Embedded Security Systems
* Sensor Interfacing
* Arduino-based Automation

---

# Future Improvements

* LCD Display Integration
* Firebase Attendance Logging
* ESP32 IoT Integration
* Google Sheets Attendance Storage
* Web Dashboard Monitoring

---

# Project Images

## Circuit Setup

(Add your circuit image here)

## RFID Attendance System

(Add your project image here)

---

# Conclusion

This project helped me understand practical RFID-based authentication systems and real-world embedded automation concepts used in modern attendance and access control systems.
