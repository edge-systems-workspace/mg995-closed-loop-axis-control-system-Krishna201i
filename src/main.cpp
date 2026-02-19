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

    // TODO 4:
    // Initialize Serial communication (9600 baud)

    // TODO 5:
    // Attach servo to PWM pin

    // TODO 6:
    // Print system initialization message
}

void loop() {

    // TODO 7:
    // Check if Serial data is available

    // TODO 8:
    // Read integer angle input from Serial

    // TODO 9:
    // Validate angle range (0–180)
    // If valid → move servo
    // If invalid → print error message

    // TODO 10:
    // Print confirmation message after movement
}
