void setup() {
  Serial.begin(9600); // Initialize Serial communication at 9600 bps
}

void loop() {
  int sensorValue = analogRead(A0); // Read sensor value
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue); // Send data to Serial Monitor
  delay(1000);
}

//establishing the communication between arduino and your computer 
