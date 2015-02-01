int LED0=8;
int LED1=3;
int BT=1;


void setup() 
{
   pinMode(LED0,OUTPUT);
   pinMode(LED1,OUTPUT);
   pinMode(BT,INPUT);

   attachInterrupt(0,Interrupt,LOW);
} 

void loop() 
{
	
	digitalWrite(LED0,HIGH);
	delay(100);
	digitalWrite(LED0,LOW);
	delay(100);


}
	



void Interrupt()
{
	

	for (int i = 0; i < 300; ++i)
	{
		digitalWrite(LED0,LOW);
		digitalWrite(LED1,HIGH);
		delay(1000);	
		digitalWrite(LED1,LOW);
	}
	
			
}