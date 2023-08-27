const int sensorPin = A0; // Analog pin for the sensor

void setup() {
  pinMode(sensorPin, INPUT); // Set sensor pin as input
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Read sensor value
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue); // Print the sensor value
  delay(1000);
}
