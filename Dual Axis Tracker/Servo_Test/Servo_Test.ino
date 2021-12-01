/*
 * Servo_Test.ino
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

int pos = 0;
int moveDelay = 50;

void setup() {
  horizontal.attach(5);
  vertical.attach(6);
  horizontal.write(90);
  vertical.write(90);
  delay(2000);
}

void loop() {
  
  for (pos = 70; pos <= 110; pos++) {
    horizontal.write(pos);
    delay(moveDelay);
  }
  delay(1000);

  for (pos = 110; pos >= 70; pos--) {
    horizontal.write(pos);
    delay(moveDelay);
  }
  delay(1000);

  for (pos = 70; pos <= 110; pos++) {
    vertical.write(pos);
    delay(moveDelay);
  }
  delay(1000);
  
  for (pos = 110; pos >= 70; pos--) {
    vertical.write(pos);
    delay(moveDelay);
  }
  delay(1000);

}
