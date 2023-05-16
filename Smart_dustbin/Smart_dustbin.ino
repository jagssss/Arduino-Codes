#include<Servo.h>
#define echoPin 2 
#define trigPin 3 


long duration; 
int distance; 
Servo Myservo;
int pos;
void setup() {
  
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
  Myservo.attach(9);
}
void loop() {
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  
  distance = duration * 0.034 / 2; 
 
  if(distance<=5 && distance>0)
  {
    
    for(pos=0;pos<=180;pos++){
    Myservo.write(pos);
    delay(15);
            }
        delay(10000);
  
        for(pos=180;pos>=0;pos--){
        Myservo.write(pos);
        delay(15);
            }
        delay(1000);
  }
  else{
    //digitalWrite(9, LOW); 
  }
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
 
                    
}
