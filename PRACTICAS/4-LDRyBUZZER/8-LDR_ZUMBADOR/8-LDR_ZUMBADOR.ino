//Definimos los pines
const int zumbador = 2;
const int ldr = A0;
void setup () {
	Serial.begin(9600);
	pinMode(zumbador, OUTPUT);
	pinMode(ldr, INPUT);
}
void loop() {
	int nivelLuz = analogRead(ldr); //leemos el nivel de luz con el LDR
	if (nivelLuz >= 400) {	//usaremos un valor según el nivel de luz de la sala
		tone(zumbador, 100);
		delay(100);
		noTone(zumbador);
		delay(100);
		Serial.println("----- TENEMOS LUZ -- ALARMA -----");
	}
	else {
		noTone(zumbador);
		Serial.println("SIN LUZ - NO HAY ALARMA");
	}
}