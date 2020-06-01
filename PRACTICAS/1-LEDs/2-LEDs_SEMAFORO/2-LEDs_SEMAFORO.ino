/*
Secuencia de leds en semáforo
Conectamos los Leds en los pines 4, 5 y 6
*/
const int pausa = 2000; //Tiempo encendido led
void setup() {
// inicializamos pines del 4 al 6 como OUTPUT
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
}
void loop() {
// encendemos y apagamos en un bucle desde el pin 4 al 6
for (int pinLed = 4; pinLed < 7; pinLed++) {
// pone el pinLed en HIGH encendiendo el led
digitalWrite(pinLed, HIGH);
delay(pausa);
// pone el pinLed en LOW apagando el led
digitalWrite(pinLed, LOW);
}
delay(pausa);
// encendemos y apagamos en otro bucle desde el pin 6 al 4
for (int pinLed = 6; pinLed > 3; pinLed--) {
// pone el pinLed en HIGH encendiendo el led
digitalWrite(pinLed, HIGH);
delay(pausa);
// pone el pinLed en LOW apagando el led
digitalWrite(pinLed, LOW);
}
delay(pausa);
}