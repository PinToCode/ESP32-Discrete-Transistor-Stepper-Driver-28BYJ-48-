#include <Stepper.h>

// The 28BYJ-48 has 2048 steps per full revolution of the output shaft
const int stepsPerRevolution = 2048; 

// Initialize the library with your GPIO pins.
// Connection: IN1 -> GPIO 19, IN2 -> GPIO 18, IN3 -> GPIO 5, IN4 -> GPIO 17
// IMPORTANT: The sequence 1-3-2-4 (19, 5, 18, 17) is usually required for 
// this motor to spin correctly with the Stepper library.
Stepper myStepper(stepsPerRevolution, 19, 5, 18, 17);

void setup() {
  // Set speed in RPM. 10-15 is the ideal range for 5V.
  myStepper.setSpeed(10);
  
  // Initialize Serial for debugging
  Serial.begin(115200);
  Serial.println("Stepper Motor Test Initialized");
}

void loop() {
  // Step clockwise
  Serial.println("Moving Clockwise...");
  myStepper.step(stepsPerRevolution);
  delay(1000);

  // Step counter-clockwise
  Serial.println("Moving Counter-Clockwise...");
  myStepper.step(-stepsPerRevolution);
  delay(1000);
}
