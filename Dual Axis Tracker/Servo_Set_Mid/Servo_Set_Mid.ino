/*
 * Servo_Set_Mid.ino
 *
 * Brown Dog Gadgets <https://www.browndoggadgets.com/>
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
