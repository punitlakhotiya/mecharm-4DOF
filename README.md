# mecharm-4DOF

A 3D-printable, 4-DOF robotic arm featuring a turning base and a custom 3-gear claw powered by an Arduino Uno.

---

## Features

* **3 Degrees of Freedom (3-DOF):** Base Yaw, Shoulder Pitch, Elbow Pitch, Wrist Pitch/Roll, and Claw Actuation.
* **High-Torque 9:1 / 3:1 Base Gear:** Custom spur gear drive designed for 200 mm diameter bases with an integrated MG995/MG996R aluminum servo horn pocket.
* **3-Gear Claw:** Center driven servo gear driving two identical finger gears for gripping motion.
* **Arduino Control Firmware:** Basic Arduino control
---

## Hardware & Bill of Materials (BOM)

| Item Description | Details / Specs | Quantity | Unit Price ($) | Total Price ($) | Supplier / Source |
| :--- | :--- | :---: | :---: | :---: | :--- |
| **M2×22 Hex Socket Cap Screws** | DIN 912 steel, grade 12.9, full thread (Pack of 10) | 1 | $2.93 | $2.93 | Ozon |
| **25T Aluminum Round Servo Horn** | Silver round servo horn for 25T splines (MG995/MG996R) | 3 | $6.28 | $18.84 | Ozon |
| **MG996R Servo Motor** | High-torque metal gear servo motor | 3 | $8.43 | $25.29 | Ozon |
| **SG90 180° Micro Servo** | 9g nylon gear micro servo | 2 | $3.50 | $7.00 | Online Vendor |
| **Arduino Uno R3** | ATmega328P microcontroller board with USB cable | 1 | $4.99 | $4.99 | Micro Center |
| **TOTAL** | — | — | — | **$59.05** | — |

---

##  Wiring & Pinout

| Servo Function | Servo Model | Arduino Signal Pin |
| :--- | :--- | :---: |
| **Base Yaw** | MG996R | Pin 8 |
| **Shoulder Pitch** | MG996R | Pin 9 |
| **Elbow Pitch** | MG996R | Pin 10 |
| **Wrist Pitch** | SG90 | Pin 11 |
| **Claw Gripper** | SG90 | Pin 12 |
