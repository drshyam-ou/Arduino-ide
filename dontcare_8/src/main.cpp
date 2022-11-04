#include<Arduino.h>
int Z=0,Y=0,X=0,W=1;
int D,C,B,A;

void disp_decoder(int a, int b, int c, int d, int e,int f, int g)
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
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  pinMode(12,INPUT);
  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int W=digitalRead(6);
  int X=digitalRead(7);
  int Y=digitalRead(8);
  int Z=digitalRead(9);
  a=(Y&&!W);
  b=(Y&&!X&&W)||(Y&&X&&!W);
  c=(!Y&&X&&!W);
  d=(Y&&!X&&!W)||(!Y&&!X&&W)||(W&&X&&Y);
  e=(W)||(Y&&!X);
  f=(!Z&&!Y&&!X)||(!X&&!W)||(!Y&&X&&!W);
  g=(!Z&&!Y&&!X)||(!Z&&!X&&!W);
  disp_decoder(a,b,c,d,e,f,g);
}
