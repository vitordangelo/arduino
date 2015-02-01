#include <EEPROM.h>

int LED = 7;
int BT = 8;
byte n;
int i;

void setup() 
{
	pinMode (LED,OUTPUT);
	pinMode (BT, INPUT);  
	Serial.begin(9600);
	digitalWrite (BT, HIGH);
}

void loop() 
{
	
	while(digitalRead(BT) == HIGH);
	{
		 digitalWrite (LED,HIGH);
	  	 delay(100);
	  	 digitalWrite (LED,LOW);
	  	 delay(100);

	  	 EEPROM.write(0,i);
	  	 n = EEPROM.read(0);

	  	 i = i+1;

	  	 Serial.print("Valor");
	  	 Serial.print("\t");
	  	 Serial.print(n);
	  	 Serial.println();
	  	 delay(1000);
	}  
}

