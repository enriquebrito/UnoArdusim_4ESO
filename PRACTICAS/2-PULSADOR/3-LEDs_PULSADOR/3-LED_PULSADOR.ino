int pulsador=12;
int led=9;
int val;
void setup(){
	pinMode(pulsador, INPUT_PULLUP); //HIGH por defecto
	pinMode(led, OUTPUT);
}
void loop() {
/**********************************
val=digitalRead(pulsador);
if(val==HIGH){
digitalWrite(led,HIGH);
}
else{digitalWrite (led,LOW);
**********************************/	
	//
	
	digitalWrite(led,digitalRead(pulsador));
}