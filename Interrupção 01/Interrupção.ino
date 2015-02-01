 
const int LED0=6;
const int LED1=7;
const int S0=18;
const int S1=2;
const int LED2=21;

void Alarme();

void setup() 
{
   pinMode(LED0,OUTPUT);
   pinMode(LED1,OUTPUT);
   pinMode(LED2,OUTPUT);

   pinMode(S0,INPUT);
   pinMode(S1,INPUT);

   digitalWrite(S0,HIGH);
   digitalWrite(S1,HIGH);

   digitalWrite(LED2,HIGH);

   attachInterrupt(5, Alarme, LOW);
} 


void loop() 
{
	
	  	digitalWrite(LED2,LOW);

	  	digitalWrite(LED0,HIGH);
	  	delay(200);
	  	digitalWrite(LED0,LOW);

	  	digitalWrite(LED1,HIGH);
	  	delay(200);
	  	digitalWrite(LED1,LOW);
	  
}

void Alarme()
{
	delay(10000);
	noInterrupts();
	digitalWrite(LED2,HIGH);
	delay(10000);
	interrupts();
}