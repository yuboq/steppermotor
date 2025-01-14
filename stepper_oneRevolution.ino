
/*
Modifies original code from 1 rev to 1/4 rev. Waits 240s before reversing direction

 */

#include <Stepper.h>

const int stepsPerRevolution = 500;  // steps per revolution, use 2038 for full revolution
// for your motor
//uses UL to prevent overflow error
const unsigned long timedelay = 240UL*1000UL;
int stepCount = 0;
// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  myStepper.setSpeed(50);
}

void loop() {
  // step one revolution  in one direction:

  myStepper.step(stepsPerRevolution);
  delay(timedelay);

  // step one revolution in the other direction:

  myStepper.step(-stepsPerRevolution);
  delay(timedelay);
}
