#include "Quad7Segment.h"

Quad7Segment shreg(2,3,4,5);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int n = analogRead(A0);
  shreg.setNumber(n);
  shreg.update();
}
