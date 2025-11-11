// ---------------------------------------
// Project 1 - LED Control Circuit
// Student names: Gursharanbir Singh, Arjun Singh, Arshpreet Singh
// Group number: 7
// Description: Blink an LED using Pin 13
// ---------------------------------------

void setup() {
  pinMode(13, OUTPUT);     // Set Pin 13 as an OUTPUT so it can power the LED
}

void loop() {
  digitalWrite(13, HIGH);  // Turn ON the LED connected to Pin 13
  delay(650);              // Waits 650 milliseconds (custom ON delay)

  digitalWrite(13, LOW);   // Turn OFF the LED
  delay(300);              // Waits 300 milliseconds (custom OFF delay)
}