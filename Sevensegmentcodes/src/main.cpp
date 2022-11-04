#include <Arduino.h>
void sevenseg(int a,int b,int c,int d,int e,int f,int g)
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
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
      sevenseg(0,0,0,0,0,0,1);//1
	delay(1000);
      sevenseg(1,0,0,1,1,1,1);//1
        delay(1000);
      sevenseg(0,0,1,0,0,1,0);//2
    delay(1000);
sevenseg(0,0,0,0,1,1,0);//3
    delay(1000);
sevenseg(1,0,0,1,1,0,0);//4
    delay(1000);
sevenseg(0,1,0,0,1,0,0);//5
    delay(1000);
sevenseg(1,1,0,0,0,0,0);//6
    delay(1000);
sevenseg(0,0,0,1,1,1,1);//7
    delay(1000);
sevenseg(0,0,0,0,0,0,0);//8
    delay(1000);
sevenseg(0,0,0,1,1,0,0);//9
    delay(1000);


  // put your main code here, to run repeatedly:
}


