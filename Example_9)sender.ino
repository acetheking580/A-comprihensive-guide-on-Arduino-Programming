void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
  delay(1000);
}

// run this on 1 arduino 
