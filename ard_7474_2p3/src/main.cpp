#include<Arduino.h>
int Z=0,Y=0,X=0,W=0;
int D,C,B,A;
void disp_7447(int D, int C, int B, int A)
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
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  W=digitalRead(6);
  X=digitalRead(7);
  Y=digitalRead(8);
  Z=digitalRead(9);
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
  A=(!W&&!Z)||(!W&&!X&&!Y);
  B=(W&&!X&&!Z)||(!W&&X&&!Z);
  C=(W&&X&&!Y&&!Z)||(!X&&Y&&!Z)||(!W&&Y&&!Z);
  D=(W&&X&&Y&&!Z)||(!W&&!X&&!Y&&Z);
  disp_7447(D,C,B,A);
}
