#include <Servo.h>
Servo servo1;

void setup() {
  pinMode(13,OUTPUT);
  pinMode(2,INPUT);
  servo1.attach(6);
}

void loop() {
  
  int button = digitalRead(2);
  int dial = analogRead(0);
  if (button==LOW){ // Read the button state
    digitalWrite(13,HIGH);
    tone(9,440);
    delay(500);
    delay(dial);
    servo1.write(0);
    delay(500);
    servo1.write(90);
    delay(500);
    servo1.write(180);
    delay(500);
    servo1.write(90);
    delay(500);
    } else { 
    digitalWrite(13,LOW);
    noTone(9);
    delay(200);
    delay(dial);
  }
}
