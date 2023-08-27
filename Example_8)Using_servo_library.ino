#include <Servo.h> // Include the Servo library

Servo myservo; // Create a servo object

void setup() {
  myservo.attach(9); // Attach servo to pin 9
}

void loop() {
  myservo.write(90); // Set servo to 90 degrees
  delay(1000);
  myservo.write(0); // Set servo to 0 degrees
  delay(1000);
}

// setting the servo to a certain value then reversing it back to its initial position 
