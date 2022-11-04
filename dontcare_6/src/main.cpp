#include<Arduino.h>
int D,C,B,A;
void inc_decoder(int D, int C, int B, int A)
{
  digitalWrite(2,A);
  digitalWrite(3,B);
  digitalWrite(4,C);
  digitalWrite(5,D);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int W=digitalRead(6);
  int X=digitalRead(7);
  int Y=digitalRead(8);
  int Z=digitalRead(9);
  A=(!W);
  B=(W&&!X&&!Z)||(!W&&X);
  C=(!X&&Y)||(!W&&Y)||(W&&X&&!Y);
  D=(!W&&Z)||(W&&X&&Y);
  inc_decoder(D,C,B,A);
}
