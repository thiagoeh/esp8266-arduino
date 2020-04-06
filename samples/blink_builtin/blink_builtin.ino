void setup() {
//  pinMode(2, OUTPUT);     // Initialize GPIO2 pin as an output
  pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on by making the voltage LOW
  delay(1000);            // Wait for a second
  
  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  delay(1000);            // Wait for two seconds
}
