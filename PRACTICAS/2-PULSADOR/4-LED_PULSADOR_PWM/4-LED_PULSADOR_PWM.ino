int pulsador=12;
int led=9;
int i;
void setup(){
	pinMode(pulsador, INPUT_PULLUP); //HIGH por defecto
	pinMode(led, OUTPUT);
}
void loop() {
	//digitalWrite(led,digitalRead(pulsador));
	//LED encendido sin dar pulsador
	//Al dar pulsador va de apagado a máximo y a apagado
	digitalWrite(led,HIGH);
	while ( digitalRead(pulsador) == LOW ) {
		for ( i = 0; i <= 255 ; i=i+5 ) {
			analogWrite(led,i);
			delay(25);
		}
		for ( i = 255 ; i >= 0; i=i-5 ) {
			analogWrite(led,i);
			delay(25);
		}
	}
}