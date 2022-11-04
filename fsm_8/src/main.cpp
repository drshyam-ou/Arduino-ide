#include<Arduino.h>
int X=1,Q1=0,Q0=0;
int Z,D0,D1;
void seq_det(int Z, int D0, int D1)
{
  digitalWrite(2,Z);
  digitalWrite(3,D0);
  digitalWrite(4,D1);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  X=digitalRead(6);
  Q1=digitalRead(7);
  Q0=digitalRead(8);
  
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  D1=(Q1&&X)||(Q0&&X);
  D0=(!Q1&&!Q0&&X);
  Z=(Q1&&X);
  seq_det(Z,D0,D1);
}
