# ultrasonic-radar-scanner

Overview

This project is an embedded radar system built using an Arduino, HC-SR04 ultrasonic sensor, and a servo motor. The system performs a 180-degree sweep and measures distance data in real time to detect nearby objects.

Components:
Arduino Uno
HC-SR04 Ultrasonic Sensor
Servo Motor (SG90)
LEDs (Red, Yellow, Green)
Breadboard and jumper wires

How It Works:
The servo motor sweeps from 0° to 180°.
At each angle, the HC-SR04 measures distance using ultrasonic pulses.
The system converts time-of-flight into distance (cm).
LEDs indicate object proximity:
Green: Safe distance (>20 cm)
Yellow: Medium range (15–20 cm)
Red: Close object (<15 cm)

Key Features:
Real-time scanning system
Angle + distance mapping
Threshold-based visual alert system
Serial Monitor data output for debugging and visualization

Technologies Used:
Arduino C++
Ultrasonic sensing (HC-SR04)
Servo motor control
Embedded systems logic

Future Improvements:
Radar visualization using Processing or Python
Object tracking system
3D printed radar housing
