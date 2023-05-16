void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, OUTPUT);  //Red LED
  pinMode(3, OUTPUT);  //Yellow LED
  pinMode(2, OUTPUT);   //Green LED
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(9000);                       
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
   
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                       // wait for a second
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(9000);                       // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  
}
