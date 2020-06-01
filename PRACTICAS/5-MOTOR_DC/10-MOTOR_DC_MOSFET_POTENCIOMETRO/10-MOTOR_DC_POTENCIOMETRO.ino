const int pot = A0; //Potenciómetro en PIN A0
const int motorDC = 3; //Motor DC en el PIN 3
int velocidad = 0;
void setup(){
	pinMode(motorDC, OUTPUT); //Definimos PIN de salida al Motor DC
	pinMode(pot, INPUT); //Definimos PIN entrada del potenciómetro
}
void loop()
{
	int pot_value = analogRead(pot); //Leemos posición del potenciómetro
	velocidad = map (pot_value,1023,0,255,0); //Mapeamos valores de 0-1023 a 0-255 para PWM
	analogWrite(motorDC,velocidad); //Velocidad de motorDC según valor de potenciómetro
	delay(20); // Breve pausa para no saturar la entrada analógica
}