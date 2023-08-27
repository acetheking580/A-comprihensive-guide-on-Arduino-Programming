void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String receivedData = Serial.readStringUntil('\n'); // Read data until newline
    Serial.println("Received: " + receivedData);
  }
}
// this will be uploaded to the second arduino 
