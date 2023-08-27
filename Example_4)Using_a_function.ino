int addNumbers(int a, int b) {
  return a + b;
}

void setup() {
  int result = addNumbers(5, 3); // Call the function
  Serial.begin(9600);
  Serial.print("Result: ");
  Serial.println(result); // Print the result
}

void loop() {
  // Empty loop
}
//This program only prints the information in the serial monitor, we will see in the future how we can display this on an Oled or LCD screen!
