# arduino-ultrasonic-radar
A simple ultrasonic radar using Arduino and HC-SR04 sensor
# Ultrasonic Radar Project with Servo

A simple **ultrasonic radar system** using the **HC-SR04 sensor** and a **servo motor**.  
This project measures distances and rotates the sensor with the servo to visualize detected objects in real-time using **Arduino/ESP32** and **Processing**.

---

## 🚀 Project Overview

- **HC-SR04 ultrasonic sensor** measures distances.
- **Servo motor** rotates the sensor to scan the environment.
- **Arduino/ESP32** reads sensor data and controls the servo.
- **Processing sketch** visualizes distance data as a radar-like display.
- Ideal for **learning**, **simulation**, and **small radar projects**.

---

## 🔧 Components Required

- Arduino UNO or ESP32  
- HC-SR04 Ultrasonic Sensor  
- Servo motor (e.g., SG90)  
- Breadboard and jumper wires  
- Computer with **Processing** installed for radar visualization

---

## 📂 Repository Files

- `radar.ino` → Arduino sketch to read sensor data, control the servo, and send data via Serial  
- `radar_visual.pde` → Processing sketch to display distance data as a radar  
- `ultrasonic_radar_circuit.jpg` → Circuit photo or schematic showing connections

---

## ⚡ How to Run

1. Connect Arduino/ESP32 to your computer.
2. Open `radar.ino` in Arduino IDE and upload it to your board.
3. Open **Processing**, load `radar_visual.pde`, and run the sketch.
4. The servo will rotate the sensor, and the radar visualization will display detected distances in real-time.

---

## 📸 Circuit Image
you can download in main page 
---

## 📝 License

This project is licensed under the **MIT License**, allowing you to use, modify, and share it freely for educational and personal purposes.

