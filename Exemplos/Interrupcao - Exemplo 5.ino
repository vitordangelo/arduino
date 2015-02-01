const int OP=6;
int AL=7;
int CH1=1;
int S1=2;

void setup() 
{
   pinMode(OP,OUTPUT);
   pinMode(AL,OUTPUT);
   pinMode(CH1,INPUT);
   pinMode(S1,INPUT);

   digitalWrite(CH1,HIGH);
   digitalWrite(S1,HIGH);

   attachInterrupt(0,Alarme,FALLING);
} 

void loop() 
{
	if (digitalRead(CH1) == LOW)
	  {
	  	digitalWrite(OP,HIGH);
	  	delay(5000);
	  	digitalWrite(OP,LOW);
	  	delay(5000);
	  }  

	else
	{
		digitalWrite(OP,LOW);
		digitalWrite(AL,LOW);
	}
}

void Alarme()
{
	noInterrupts();
	digitalWrite(AL,HIGH);
	interrupts();
}