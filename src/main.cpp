/**
 * @file main.cpp
 * @brief MG995 Closed-Loop Axis Control System
 * @author krishna201i
 * @date 2026-01-01
 *
 * @details
 * This program implements PWM-based control of MG995 servo motor.
 * The system accepts angle input via Serial Monitor and moves
 * the servo after validating input range (0–180 degrees).
 */
#include <Arduino.h>
#include <Servo.h>

Servo myServo;
void setup() {

    Serial.begin(9600);

    myServo.attach(11);

    Serial.println("Servo initiate");
}

void loop() {

    for (int i = 0; i <= 180; i += 10) {
        myServo.write(i);

        Serial.print("Servo Angle: ");
        Serial.println(i);

        delay(500);
    }

    for (int i = 180; i >= 0; i -= 10) {
        myServo.write(i);

        Serial.print("Servo Angle: ");
        Serial.println(i);

        delay(500);
    }

}
