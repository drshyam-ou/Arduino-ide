#include<Arduino.h>
int Z=0,Y=0,X=0,W=0;
int a,b,c,d,e,f,g;
void disp_7447(int a, int b, int c, int d,int e,int f,int g)
{
	
  digitalWrite(2,a);
  digitalWrite(3,b);
  digitalWrite(4,c);
  digitalWrite(5,d);
  digitalWrite(6,e);
  digitalWrite(7,f);
  digitalWrite(8,g);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  pinMode(12,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  W=digitalRead(6);
  X=digitalRead(7);
  Y=digitalRead(8);
  Z=digitalRead(9);
  a=(Y&&!W);
  b=(Y&&!X&&W)||(Y&&X&&!W);
  c=(!Y&&X&&!W);
  d=(Y&&!X&&W)||(!Y&&!X&&W)||(Y&&X&&W);
  e=(W)||(Y&&!X);
  f=(!Z&&!Y&&!X)||(!X&&!W)||(!Y&&X&&!W);
  g=(!Z&&!Y&&!X)||(!Z&&!X&&!W);
  
  disp_7447(a,b,c,d,e,f,g);
}
