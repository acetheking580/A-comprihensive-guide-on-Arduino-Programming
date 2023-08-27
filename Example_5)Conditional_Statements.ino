int temperature = 25; // Current temperature in Celsius

void setup() {
  Serial.begin(9600);
  if (temperature > 30) {
    Serial.println("It's hot outside!");
  } else if (temperature < 15) {
    Serial.println("It's chilly!");
  } else {
    Serial.println("It's a pleasant day.");
  }
}

void loop() {
  // Empty loop
}
