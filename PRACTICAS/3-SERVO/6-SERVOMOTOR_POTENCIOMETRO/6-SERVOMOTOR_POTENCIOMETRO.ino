#include <Servo.h> //Incluimos la biblioteca
int pot = A0; //Potenci�metro en PIN A0
int sg90_pin = 3; //Servo en el PIN 3
int angle = 0; //Variable para guardar �ngulo de giro
Servo sg90; //Variable para el servo
void setup(){
	sg90.attach(sg90_pin); //Decimos a Arduino que controle el servo en el PIN 3
}
void loop()
{
	int pot_value = analogRead(pot); //Leemos valor de posici�n del potenci�metro
	angle = map (pot_value,1023,0,180,0); //Mapeamos valores de 0-1023 a 0-180
	sg90.write(angle); //Posicionamos el servo en el �ngulo correspondiente
}