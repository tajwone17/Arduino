# CSE-06133118 Microprocessor and Interfacing Lab

This repository contains Arduino sketches prepared for the **Microprocessor and Interfacing Lab** course.
The work includes basic digital I/O practice, analog sensing, PWM, EEPROM experiments, interrupt handling,
servo control, and small embedded projects.

## Task Overview

### Basic Lab Tasks

- `lab-task-1` - LED blink program.
- `lab-task-2` - LED controlled by a switch.
- `lab-6-task-1` - LED blink using a custom software PWM-style timing function.
- `lab-6-task-2` - fixed PWM output at different duty values.
- `lab-6-task-3` - PWM sweep using `analogWrite()`.
- `lab-6-task-4` - LED brightness stepping from 0 to 100 percent.
- `lab-6-task-5` - LED control based on analog sensor voltage threshold.

### Switch, Interrupt, and EEPROM Tasks

- `lab-7-task-1` - button toggle with basic state handling.
- `lab-7-task-2` - switch debounce example for stable LED toggling.
- `lab-7-task-3` - external interrupt based LED toggle.
- `lab-7-task-4` - EEPROM write/read with LED byte display.
- `lab-7-task-5` - EEPROM storing and replaying LED patterns.
- `lab-7-task-6` - repeated EEPROM byte display with serial output.

### Mini Projects

- `clap_switch` - clap-based LED toggle using an analog sound sensor.
- `Project-Gas-Leakage-Detector` - gas detection system with LED and buzzer alert.
- `Tool_gate` - ultrasonic sensor and servo-based gate control project.

## Demo Videos

- `lab-5` - Google Drive video link here
- `lab-8` - Google Drive video link here

## How To Use

1. Open the required folder in the **Arduino IDE**.
2. Select the correct board and COM port.
3. Upload the `.ino` sketch to the Arduino board.
4. Open the Serial Monitor if the sketch uses serial output.

## Hardware Notes

Some sketches may require the following components:

- Arduino board
- LED and resistors
- Push button or switch
- Sound sensor
- Ultrasonic sensor
- Servo motor
- Buzzer
- Gas sensor
- EEPROM support on the board

## Course Information

**Course Code:** CSE-06133118  
**Course Name:** Microprocessor and Interfacing Lab
