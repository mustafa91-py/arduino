#include <Stepper.h>
# include <Servo.h>
Servo sg90;

// Define the number of steps per revolution for the motor
const int stepsPerRevolution =2048;
// 512 step 90 derece
// 2048 ise 360 derece

// Initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);
int optimumSpeed(){
  return (2048* 15) /stepsPerRevolution ;
}

void setup() {
  sg90.attach(6);
  sg90.write(0);
  // Set the speed of the motor (RPM):
  float optimum = optimumSpeed();
  myStepper.setSpeed(optimum);
  // Initialize the serial port:
  Serial.begin(9600);
  
  
}

void loop() {
  // Step forward one revolution:
  Serial.println("Stepping forward...");
  myStepper.step(stepsPerRevolution);
  sg90.write(0);
  delay(1000);

  // Step backward one revolution:
  Serial.println("Stepping backward...");
  myStepper.step(-stepsPerRevolution);
  sg90.write(180);
  delay(1000);
}
