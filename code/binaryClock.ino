#include <stdio.h>
#include <Timer.h>

int latch = 8;
int clock = 12;
int data = 11;
byte led_num=1;
void setup(){
	pinMode(latch, OUTPUT);
	pinMode(clock, OUTPUT);
	pinMode(data, OUTPUT);
}
void loop(){
	byte led=0;
	led_num=1<< led;
  	digitalWrite(latchPin, LOW);

}
