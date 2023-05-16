
int pot;
int led;

void setup() {
  pinMode(A0, INPUT);
  pinMode(7, OUTPUT);

}

void loop() {

pot = analogRead(A0);
led = map(pot, 0 , 1023, 0, 255);
Serial.print(pot);
analogWrite(7, led);

}
