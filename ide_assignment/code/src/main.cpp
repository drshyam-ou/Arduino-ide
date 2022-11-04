#include <Arduino.h>

int IN_P=2,IN_Q=3,IN_R=4;
int OUT_F=13;
void setup() {
pinMode(OUT_F,OUTPUT);

pinMode(IN_P,INPUT);
pinMode(IN_Q,INPUT);
pinMode(IN_R,INPUT);

  // put your setup code here, to run once:
}

void loop() {

	int r,p,q,f;
	p=digitalRead(IN_P);
	q=digitalRead(IN_Q);
	r=digitalRead(IN_R);
  // put your main code here, to run repeatedly:
       f=(!q&&r)||(p&&q);
       digitalWrite(OUT_F,f);
}

