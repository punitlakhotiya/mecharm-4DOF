# mecharm-4DOF

A 3D-printable, 4-DOF robotic arm featuring a turning base and a custom 3-gear claw powered by an Arduino Uno.
This is made just to work on my skills for cadding.

---

## Features

* **3 Degrees of Freedom (3-DOF):** Base Yaw, Shoulder Pitch, Elbow Pitch, Wrist Pitch/Roll, and Claw Actuation.
* **High-Torque 9:1 / 3:1 Base Gear:** Custom spur gear drive designed for 200 mm diameter bases with an integrated MG995/MG996R aluminum servo horn pocket.
* **3-Gear Claw:** Center driven servo gear driving two identical finger gears for gripping motion.
* **Arduino Control Firmware:** Basic Arduino control
---
<img src="IMAGES/7) 08-10-26 - Part 2/image.png" alt="image error">

## Hardware & Bill of Materials (BOM)

| Item Description | Details / Specs | Quantity | Unit Price ($) | Total Price ($) | Supplier / Source |
| :--- | :--- | :---: | :---: | :---: | :--- |
| **M2×22 Hex Socket Cap Screws** | DIN 912 steel, grade 12.9, full thread (Pack of 10) | 1 | $.4 | $4 | https://www.metricscrews.us/index.php?main_page=product_info&cPath=13_250&products_id=1412&srsltid=AfmBOopWZ_IcXH2O7ACTpveclPVdlOm89vhlH-_w-4wyU5C52swU4_wotFg |
| **25T Aluminum Round Servo Horn** | Silver round servo horn for 25T splines (MG995/MG996R) | 3 | $.22 | $6.39 | https://burk.pk/product/mg996r-180-degree-servo-motor/?srsltid=AfmBOoohxqHeBAyDhJo09GgR8kRHy9zut86m2Irxsu4KRY8JdkbTQ8HkfSA |
| **MG996R Servo Motor** | High-torque metal gear servo motor | 3 | $2.73 | $8.19 | https://burk.pk/product/mg996r-180-degree-servo-motor/?srsltid=AfmBOoohxqHeBAyDhJo09GgR8kRHy9zut86m2Irxsu4KRY8JdkbTQ8HkfSA |
| **SG90 180° Micro Servo** | 9g nylon gear micro servo | 2 | $1 | $7.93 | https://www.aliexpress.us/item/2251832797213793.html?src=google&src=google&albch=shopping&acnt=708-803-3821&isdl=y&slnk=&plac=&mtctp=&albbt=Google_7_shopping&aff_platform=google&aff_short_key=UneMJZVf&gclsrc=aw.ds&albagn=888888&ds_e_adid=&ds_e_matchtype=&ds_e_device=c&ds_e_network=x&ds_e_product_group_id=&ds_e_product_id=en2251832797213793&ds_e_product_merchant_id=106490649&ds_e_product_country=US&ds_e_product_language=en&ds_e_product_channel=online&ds_e_product_store_id=&ds_url_v=2&albcp=19558607238&albag=&isSmbAutoCall=false&needSmbHouyi=false&gad_source=1&gad_campaignid=19566915268&gbraid=0AAAAAD6I-hEMRICAUkR9KGrh0kUuyzUB6&gclid=Cj0KCQjwv4XUBhDBARIsAE6bQUQJuwChDWx_QvTV8ZKduMK0J7ohoFCLjKj0NnksTanLnWoPJLf8xn4aArojEALw_wcB&gatewayAdapt=glo2usa |
| **Arduino Uno R3** | ATmega328P microcontroller board with USB cable | 1 | $4.99 | $4.99 | https://www.microcenter.com/product/693141/inland-uno-r3-development-board-with-ch340-drives-atmega328p-microcontroller-module |
| **TOTAL** | — | — | — | **$31.50** | — |

---

##  Wiring & Pinout

| Servo Function | Servo Model | Arduino Signal Pin |
| :--- | :--- | :---: |
| **Base Yaw** | MG996R | Pin 8 |
| **Shoulder Pitch** | MG996R | Pin 9 |
| **Elbow Pitch** | MG996R | Pin 10 |
| **Wrist Pitch** | SG90 | Pin 11 |
| **Claw Gripper** | SG90 | Pin 12 |
