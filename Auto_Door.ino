/*
  ---------------------------------------------------------
  Project         : Automatic Door with Ultrasonic Sensor
  Youtube Channel : @AmithLabs
  Author          : Amith Wijekoon
  ---------------------------------------------------------

  This Arduino project demonstrates a simple automatic
  door system using an ultrasonic sensor and a servo motor.

  When an object is detected within 14 cm, the door opens
  automatically. After a 3-second delay, the door closes.

  This project is ideal for learning basic automation,
  distance measurement, and servo control using Arduino.

  ---------------------------------------------------------
  Hardware Connections
  ---------------------------------------------------------

  Ultrasonic Sensor (HC-SR04)
    TRIG -> Pin 3
    ECHO -> Pin 2

  Servo Motor
    Door Servo -> Pin 9

  ---------------------------------------------------------
*/
#include <Servo.h>

Servo doorServo;

// Pin definitions
const int trigPin = 3;
const int echoPin = 2;
const int servoPin = 9;

// Variables
long duration;
int distance;
bool doorOpen = false;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  doorServo.attach(servoPin);
  doorServo.write(180); // door closed

  Serial.begin(9600);
}

void loop() {

  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance (cm)
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  // If object closer than 14cm
  if (distance > 0 && distance <= 14 && !doorOpen) {

    doorServo.write(60); // open door
    doorOpen = true;

    delay(3000); // wait 3 seconds

    doorServo.write(180); // close door
    doorOpen = false;
  }

  delay(200);
}