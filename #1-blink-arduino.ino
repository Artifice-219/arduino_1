// Define the pin where the LED is connected
const int ledPin = 13;

// The setup function runs once when you press reset or power the board
void setup() {
  // Initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
}

// The loop function runs over and over again forever
void loop() {
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPin, HIGH);
  // Wait for a second
  delay(1000);
  // Turn the LED off by making the voltage LOW
  digitalWrite(ledPin, LOW);
  // Wait for a second
  delay(1000);
}
