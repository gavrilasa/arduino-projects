# Arduino Projects Repository

A collection of Arduino projects ranging from LED control to obstacle-avoidance robotics. Each project demonstrates different concepts such as sensor integration, conditional logic, and hardware interaction.

## Table of Contents
- [Installation](#installation)
- [Projects](#projects)
  - [Traffic Light Array](#array_laiulintas-traffic-light-array)
  - [Seven-Segment Display (Forward/Backward)](#array_sevensegmentmaju-seven-segment-display-forward)
  - [Obstacle-Avoiding Robot](#avoid_obstacle_robot-obstacle-avoiding-robot)
  - [LED Brightness Control with Pushbutton](#kontrol_brightness_led_dengan_pushbutton-led-brightness-control)
  - [LED Frequency Control with Potentiometer](#kontrol_frekulensi_led_dengan_potension-led-frequency-control)
  - [Nested If-Else Statements Test](#tes_for_if_eise_bertingkat-nested-if-else-test)
  - [Ultrasonic Sensor Test](#tes_sensor_ultrasonik-ultrasonic-sensor-test)

---

## Installation
1. **Prerequisites**: Arduino IDE installed on your computer.
2. Clone this repository:
   ```bash
   git clone https://github.com/your-username/arduino-projects.git
3. Open the desired project folder in the Arduino IDE.
4. Connect your Arduino board and upload the sketch.

---

## Projects

### `Array_LaIuLintas`: Traffic Light Array
Simulates a traffic light system using an array of LEDs.  
**Components**: LEDs (Red, Yellow, Green), resistors, Arduino Uno.  
**Usage**: Upload the sketch to cycle through traffic light states (Red → Green → Yellow).

---

### `Array_SevenSegmentMaju`: Seven-Segment Display (Forward)
Controls a 7-segment display to count upward (0-9).  
**Components**: 7-segment display, resistors, shift register (optional).  

---

### `Array_SevenSegmentMundur`: Seven-Segment Display (Backward)
Controls a 7-segment display to count downward (9-0).  
**Components**: Same as above.  

---

### `Avoid_Obstacle_Robot`: Obstacle-Avoiding Robot
A robot that navigates while avoiding obstacles using an ultrasonic sensor.  
**Components**: Ultrasonic sensor (HC-SR04), motor driver (L298N), DC motors, Arduino Uno.  

---

### `Kontrol_Brightness_LED_dengan_Pushbutton`: LED Brightness Control
Adjusts LED brightness levels using a pushbutton.  
**Components**: LED, pushbutton, resistor.  
**Code Logic**: Each button press cycles through predefined brightness levels (Low → Medium → High → Off).

---

### `Kontrol_Frekulensi_LED_dengan_Potension`: LED Frequency Control
Controls LED blinking frequency using a potentiometer.  
**Components**: Potentiometer, LED, resistor.  
**Usage**: Rotate the potentiometer to increase/decrease blink speed.

---

### `Tes_For_If_Eise_Bertingkat`: Nested If-Else Test
Demonstrates nested conditional logic for decision-making.  
**Example**: A simple program that checks multiple conditions (e.g., temperature and humidity thresholds).

---

### `tes_sensor_ultrasonik`: Ultrasonic Sensor Test
Measures distance using an HC-SR04 sensor and prints results to the serial monitor.  
**Components**: Ultrasonic sensor, Arduino Uno.  

---
