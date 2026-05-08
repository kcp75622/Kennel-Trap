# Project & Author 
Project Name: Kennel Bait \
Github: https://github.com/kcp75622/Kennel-Trap \
By: Jonathan Penaloza & Katherine Poz

# Project Overview
The main goal of this project is to develop a kennel bait which will allow us to capture stray kittens and cats. We wanted to demonstarte how engineering can be applied to the real world. 

# Block Diagram

# System Architecture
In this project we decided to use both MSP432 LaunchPad and Arduino Uno. For the MSP432 LaunchPad we connected the camera to VDD and GND, we decided to use the LaunchPad due to the lack of pins in the Arduino. The camera is going to be manually recorded by having it wirelessly connect to the Wifi. Using the same wifi connection allows us to see the camera in the computer where we can record. In the arduino uno we used it for our servo motors and our laser pointer. The laser pointer will be connected to one of our servo motors which will be designated inside the kennel. By doing this it will allow us to lure the cat inside the cage by being attracted to a pointer which will be moving from 90 degrees to 0 degrees. Once the cat is inside, the ultrasonic sensor will alert the second servo motor which is implemented for the door to close. 

# Interfaces and Peripheral Used
1 MSP432 LaunchPad \
1 Arduino Uno \
2 Servo Motors \
1 Laser \
1 UltraSonic Sensor \
1 Camera Module

GPIO: Ultrasonic Sensor 
PWM : Servos
Ethernet: Camera

Laser & Servo Motor 1: Pin 9 on Arduino \
Servo Motor 2: Pin 6 on Arduino \
Camera: Pins VDD & GND on MSP432 LaunchPad

# Project Demo
These videos demonstrates the project of the kennel bait: \
https://youtube.com/shorts/da622UYXgPY?feature=share \
https://youtube.com/shorts/R6GbHBZ4zEY?si=sVHrpu04Ad-8yZ2g 

Photos
<img width="3000" height="4000" alt="20260507_191502" src="https://github.com/user-attachments/assets/f81fdf09-0312-4623-a65b-26918494bc11" />

# Conclusion
In conclusion, we were able to create a kennel bait that allowed us to be able to capture cats. As well as show the sensor, servo and camera to a working bait. We learned how to implement servos, ultrasonic sensor, and also using arduino. 
