#include <Arduino.h>

#define LED D0            // Led in NodeMCU at pin GPIO16 (D0).

void setup() {
  pinMode(LED, OUTPUT);    // LED pin as output.
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(200);            
  digitalWrite(LED, LOW); 
  delay(100); 
  digitalWrite(LED, HIGH);
  delay(200);           
  digitalWrite(LED, LOW); 
  delay(1000); 
}