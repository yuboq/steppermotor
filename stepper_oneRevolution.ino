
/*
 Stepper Motor Control - one revolution

 This program drives a unipolar or bipolar stepper motor.
 The motor is attached to digital pins 8 - 11 of the Arduino.

 The motor should revolve one revolution in one direction, then
 one revolution in the other direction.


 Created 11 Mar. 2007
 Modified 30 Nov. 2009
 by Tom Igoe

 */

#include <Stepper.h>

const int stepsPerRevolution = 2038;  // change this to fit the number of steps per revolution
const double numRevolution = 3.5;
const int totalSteps = stepsPerRevolution * numRevolution;
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 10,9, 11);

void setup() {
  // set the speed at 60 rpm:
    myStepper.setSpeed(10);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // step one revolution  in one direction:
  Serial.println("clockwise");

  myStepper.step(totalSteps);
  delay(1000);

  // step one revolution in the other direction:
  
  Serial.println("counterclockwise");
  myStepper.step(-totalSteps);
  delay(1000);
  
}
