// C++ code
//
#include <Servo.h>

int position = 0;

int i = 0;

int j = 0;

Servo servo_9;

Servo servo_8;

Servo servo_10;

Servo servo_11;

Servo servo_12;

void setup()
{
  servo_9.attach(9, 500, 2500);

  servo_8.attach(8, 500, 2500);

  servo_10.attach(10, 500, 2500);

  servo_11.attach(11, 500, 2500);

  servo_12.attach(12, 500, 2500);

}

void loop()
{
  position = 0;
  for (position = 1; position <= 90; position += 1) {
    servo_9.write(position);
    servo_8.write(position);
    servo_10.write(position);
    servo_11.write(position);
    servo_12.write(position);
    delay(30); // Wait for 30 millisecond(s)
  }
  for (position = 90; position >= 1; position -= 1) {
    servo_9.write(position);
    servo_8.write(position);
    servo_10.write(position);
    servo_11.write(position);
    servo_12.write(position);
  }
}