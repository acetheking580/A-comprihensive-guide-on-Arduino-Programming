const int ledPin = 13; // Pin number for the LED

void setup() {
  pinMode(ledPin, OUTPUT); // Set LED pin as output
}

void loop() {
  digitalWrite(ledPin, HIGH); // Turn on the LED
  delay(1000); // Wait for 1 second
  digitalWrite(ledPin, LOW); // Turn off the LED
  delay(1000); // Wait for 1 second
}
