void setup(){
	pinMode(LED, OUTPUT);
	pinMode(CH, INPUT);
	digitalWrite(CH,HIGH);
}

void loop() {
  if (digitalRead(CH) == HIGH)
  {
  		digitalWrite(LED, HIGH);
  }
  else
  	digitalWrite(LED, LOW);
}