# include <Servo.h>

Servo sg90;
void setup(){
  sg90.attach(6);
}

void loop(){
    sg90.write(0);
    delay(1000);
    sg90.write(90);
    delay(1000);
    sg90.write(180);
    delay(1000);
} 