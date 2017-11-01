# Cubot
A robot to solve the Rubik's Cube

## Introduction
This project used a C++ program, which takes in colors (represented by 'R''B''G''Y''W''O') at each face and gives out the solution (represented by "F1R2U3B2D3L1"), and an Arduino MEGA2560 program to execute the solution by giving digital signals to corresponding L298N drivers to control the rotation of steppers.

In this project, Arduino MEGA2560 is powered by my Mac; drivers and steppers (rated 3.3V 1.5A) are powered by an external DC power source. 

To control each stepper, 4 consecutive digital output pin of Arduino MEGA2560 are connected to IN 1 through 4 on the driver board; OUT 1 through 4 are connected to A+ A- B+ B- of my dipolar stepper. +12V on each driver board is connected to + of the power source; GND of each driver board and Arduino MEGA2560 are wired together and are connected to - of the power source. 

## Instruction
1. Record the colors on the Rubik's Cube exactly as is recored in CUBE_STATE.txt. Also remember to follow the description in SOLVECUBE.cpp. The final solution will be given very quickly in SOLUTION.txt; otherwise, terminate the program because the state of the cube is entered in a wrong way. 

2. Open SOLUTION.txt, paste the solution to "String command" in "void solve()" in cubot_vo.ino, and upload to the chip. 

## Futher Development
1. A stable structure to hold the steppers and cube tight.

2. color recognition
