#include <Stepper.h>

// Define the number of steps per revolution for the motor
const int stepsPerRevolution = 2048;

// Initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  // Set the speed of the motor (RPM):
  myStepper.setSpeed(15);
  // Initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // Step forward one revolution:
  Serial.println("Stepping forward...");
  myStepper.step(stepsPerRevolution);
  delay(1000);

  // Step backward one revolution:
  Serial.println("Stepping backward...");
  myStepper.step(-stepsPerRevolution);
  delay(1000);
}
