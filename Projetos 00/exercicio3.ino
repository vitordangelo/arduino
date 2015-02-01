void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(SHA, INPUT);
  pinMode(SHB, INPUT);
  pinMode(SHC, INPUT);
}

void loop() {
  digitalWrite(LED1,HIGH);

if (digitalRead(SHA) == HIGH || digitalRead(SHB) == HIGH || digitalRead(SHC) == HIGH)
{
	digitalWrite(LED2, HIGH);
}

if (digitalRead(SHA) == HIGH && digitalRead(SHB) == HIGH)
{
	digitalWrite(LED3, HIGH);
}

if (digitalRead(SHA) == HIGH && digitalRead(SHC) == HIGH)
{
	digitalWrite(LED3, HIGH);
}

if (digitalRead(SHB) == HIGH && digitalRead(SHC) == HIGH)
{
	digitalWrite(LED3, HIGH);
}

if (digitalRead(SHA) == HIGH && digitalRead(SHB) == HIGH && digitalRead(SHC) == HIGH)
{
	digitalWrite(LED4, HIGH);
	delay(500);
}




}