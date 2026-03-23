# Arduino Automatic Door with Ultrasonic Sensor

[![Watch the video](https://img.youtube.com/vi/QqiE--cGMuM/0.jpg)](https://youtu.be/QqiE--cGMuM)

📺 **Watch the Full Build Video on YouTube**
https://youtu.be/QqiE--cGMuM

---

## Project Overview

This project demonstrates a **DIY Arduino Automatic Door System** using an ultrasonic sensor and a servo motor.

An ultrasonic sensor continuously measures the distance to nearby objects. When an object is detected within a defined range, the door automatically opens using a servo motor. After a short delay, the door closes automatically.

This project is designed for **educational and demonstration purposes** related to Arduino programming, automation systems, and sensor-based control.

The full build process is available on the **AmithLabs YouTube channel**.

---

## Main Features

* Ultrasonic distance measurement system
* Automatic object detection
* Servo-controlled door mechanism
* Auto open (120°) and auto close system
* Adjustable detection distance
* Simple and beginner-friendly design

---

## Hardware Components

* Arduino Uno
* Ultrasonic Sensor (HC-SR04)
* Servo Motor
* Power Supply
* DIY Door Model (Cardboard or 3D Printed)
* Connecting Wires

---

## Pin Configuration

| Component       | Arduino Pin |
| --------------- | ----------- |
| Ultrasonic Echo | 2           |
| Ultrasonic Trig | 3           |
| Door Servo      | 9           |

---

## System Operation

1. System powers on and sets the servo to the **closed position (0°)**.
2. The ultrasonic sensor continuously measures distance.
3. If an object is detected within **14 cm**, the system triggers the door.
4. The servo rotates to **120°**, opening the door.
5. The system waits for **3 seconds**.
6. The door automatically returns to **0° (closed position)**.
7. The system continues monitoring for new objects.

---

## Arduino Code

The complete Arduino program is included in this repository:

```
Auto_Door.ino
```

This code controls:

* Distance measurement
* Object detection
* Servo movement
* Automatic timing system

---

## Project Images

```
Schematic Diagram.jpg
```

---

## YouTube Channel

This project was created for the **AmithLabs** YouTube channel.

Subscribe for more DIY electronics, robotics, and automation projects.

---

## Disclaimer

This project is created strictly for **educational and experimental purposes only**.
It should be used responsibly and safely. The creator is not responsible for any misuse of the project.

---

## Author

**W.H.M. Amith Prasanna Wijekoon**
Automation & Electrical Engineering Specialist
Creator of the **AmithLabs** YouTube Channel
