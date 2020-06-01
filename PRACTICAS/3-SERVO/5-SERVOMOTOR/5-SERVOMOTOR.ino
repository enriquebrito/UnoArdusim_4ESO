#include <Servo.h>
Servo servoInstance;
int ang = 0;
int increasing = 1;
void setup(){
	servoInstance.attach(3);
	Serial.begin(9600);
}
void loop(){
	if(increasing)
		ang ++;
	else
		ang --;
	Serial.println(ang);
	if(ang<=1){
		increasing=1;
		delay(20);
	}
	if(ang>=180){
		increasing=0;
		delay(20);
	}
	servoInstance.write(ang);
	delay(10);
}