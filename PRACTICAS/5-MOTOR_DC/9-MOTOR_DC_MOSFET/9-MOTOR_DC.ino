const int motorDC = 3; /Motor DC en PIN 3
int i;
void setup(){
	pinMode(motorDC, OUTPUT); //Definimos PIN de salida al Motor DC
}
void loop()
{
	for ( i = 0; i <= 255 ; i=i+5 ) {
		analogWrite(motorDC,i);
		delay(25); //Bucle de subida de velocidad
	}
	for ( i = 255 ; i >= 0; i=i-5 ) {
		analogWrite(motorDC,i);
		delay(25); //Bucle de bajada de velocidad
	}
}