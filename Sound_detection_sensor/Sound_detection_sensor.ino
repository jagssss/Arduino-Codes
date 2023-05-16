
int sensor_value = 0;
int threshold = 1023; //Found after the calliberation of the sensor
int sound = 0;
int led = 9; 
void setup() {

Serial.begin(9600); // setup serial
pinMode(led, OUTPUT);


}
void loop() {
sensor_value = analogRead(A0);

sound = threshold - sensor_value;
Serial.println(analogRead(A0));

if(sound > 0)
{
  digitalWrite(led, HIGH);
  delay(100);
}
else{
  digitalWrite(led, LOW);
   delay(100);
}

}
/*
void setup() {

Serial.begin(9600); // setup serial

}

void loop() {

Serial.println(analogRead(A0));

delay(10);

}
*/
