#include <Arduino.h>

int counter = 0;

int greenled = 8;
int blueled = 9;
int redled = 11;
int buttonPin = 2;

void setup() {
  Serial.begin(9600); 

  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(greenled, OUTPUT); 
  pinMode(blueled, OUTPUT);
  pinMode(redled, OUTPUT);

}

void loop() {
  int buttonState = digitalRead(buttonPin); 

  if (buttonState == HIGH) {
    digitalWrite(blueled, HIGH);
    // counter++;
    // delay(1);
  } else
  {
    digitalWrite(blueled, LOW);
  }
  


  
  // else if (counter == 0) {
  //   digitalWrite(greenled, LOW);
  //   digitalWrite(blueled, LOW);
  //   digitalWrite(redled, LOW);

  // }

  // else if (counter == 1) {
  //   digitalWrite(greenled, HIGH);
  //   digitalWrite(blueled, LOW);
  //   digitalWrite(redled, LOW);
    
  // }

  //   else if (counter == 2) {
  //   digitalWrite(greenled, LOW);
  //   digitalWrite(blueled, HIGH);
  //   digitalWrite(redled, LOW);
    
  // }

  //   else if (counter == 3) {
  //   digitalWrite(greenled, LOW);
  //   digitalWrite(blueled, LOW);
  //   digitalWrite(redled, HIGH);
    
  // }

  // else{
  //   counter = 0;
  // }

}