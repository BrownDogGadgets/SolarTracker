/*
 * Servo_Set_Mid.ino
 *
 * Brown Dog Gadgets <https://www.browndoggadgets.com/>
 * 
 * NOTE: If you are using a Solar Tracker with the older shield you will 
 * need to change the numbers 5 and 6 below to 9 and 10 in the setup.
 * 
 */

#include <Servo.h>

Servo horizontal;
Servo vertical;

void setup() {
  horizontal.attach(5);
  vertical.attach(6);
  horizontal.write(90);
  vertical.write(90);
}

void loop() { }
