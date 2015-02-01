#include <LiquidCrystal.h>

int LEDR1 = 6;
int LEDG1 = 5;
int LEDR2 = 4;
int LEDG2 = 3;

int buzzer = A15;
int sensorLDR = A8;

int btA = 2;
int btB = 1;
int btPedestre = 0;

int Sensor = 7;
int valorLido = 0;
float temperatura = 0;
float valorLDR = 0;

LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

void setup() 
{

	lcd.begin(16,2);

	pinMode (LEDR1, OUTPUT);
	pinMode (LEDG1, OUTPUT);  
	pinMode (LEDR2, OUTPUT);
	pinMode (LEDG2, OUTPUT);  

	pinMode (btA, INPUT);
	pinMode (btB, INPUT);
	pinMode (btPedestre, INPUT);

}

void loop() 
{
	
	if (analogRead(valorLDR)<=250) //Escuro
	{
		
	valorLido = analogRead(Sensor);
	temperatura = (valorLido * 0.0048875855327468);
	temperatura = temperatura *100;
	valorLDR = analogRead(sensorLDR);

	if (digitalRead(btPedestre) == LOW && digitalRead(btA) == LOW || digitalRead(btPedestre) == LOW && digitalRead(btB) == LOW) //Botão de Pedestres Ativado
	{
		analogWrite(buzzer,255);
		delay(200);
		analogWrite(buzzer,0);

		lcd.setCursor(0,0);
	   	lcd.print("LDR:");
	  	lcd.print(valorLDR);
	  	lcd.print(" Ohm");
	  	lcd.setCursor(0,1);
	  	lcd.print("Cuidado Pedestre");
	  	delay(100);
	  	
	  	digitalWrite(LEDR1, LOW);
	  	digitalWrite(LEDR2, LOW);
	  	digitalWrite(LEDG1, HIGH);
	  	digitalWrite(LEDG2, HIGH);

	  	for (int positionCounter = 0; positionCounter < 13; positionCounter++) 
	  	{
    		lcd.scrollDisplayRight(); 
    		delay(150);
		}

		lcd.clear();

		digitalWrite(LEDR1,HIGH);
		digitalWrite(LEDR2,HIGH);
	}

	if (digitalRead(btA) == LOW && digitalRead(btB) == HIGH)
	{
		for (int i = 0; i < 5; ++i)
		{
			digitalWrite(LEDR2, LOW);
			digitalWrite(LEDG1, LOW);
			digitalWrite(LEDG2, HIGH);
			digitalWrite(LEDR1, HIGH);

			int tempo1 = (5 - i);

			lcd.setCursor(0,0);
		   	lcd.print("Rua A - Siga:");
		   	lcd.setCursor(0,1);
		  	lcd.print("Tempo:");
		  	lcd.print(tempo1);
		  	delay(500);
		  	lcd.clear();
		}
		digitalWrite(LEDR2, HIGH);
		digitalWrite(LEDG1, HIGH);
	}

		if (digitalRead(btA) == HIGH && digitalRead(btB) == LOW)
	{
		for (int i = 0; i < 5; ++i)
		{
			digitalWrite(LEDR1, LOW);
			digitalWrite(LEDG2, LOW);
			digitalWrite(LEDG1, HIGH);
			digitalWrite(LEDR2, HIGH);

			int tempo1 = (5 - i);

			lcd.setCursor(0,0);
		   	lcd.print("Rua B - Siga:");
		   	lcd.setCursor(0,1);
		  	lcd.print("Tempo:");
		  	lcd.print(tempo1);
		  	delay(500);
		  	lcd.clear();
		}
		digitalWrite(LEDR1, HIGH);
		digitalWrite(LEDG2, HIGH);
	}

	if (digitalRead(btA) == LOW && digitalRead(btB) == LOW)
	{
		for (int i = 0; i < 5; ++i)
		{
			digitalWrite(LEDR2, LOW);
			digitalWrite(LEDG1, LOW);
			digitalWrite(LEDG2, HIGH);
			digitalWrite(LEDR1, HIGH);

			int tempo1 = (5 - i);

			lcd.setCursor(0,0);
		   	lcd.print("Rua A - Siga:");
		   	lcd.setCursor(0,1);
		  	lcd.print("Tempo:");
		  	lcd.print(tempo1);
		  	delay(500);
		  	lcd.clear();
		}
		digitalWrite(LEDR2, HIGH);
		digitalWrite(LEDG1, HIGH);
	}

	if (digitalRead(btA) == HIGH && digitalRead(btB) == HIGH)
	{
		digitalWrite(LEDR1, LOW);
		digitalWrite(LEDR2, LOW);
		digitalWrite(LEDG1, HIGH);
		digitalWrite(LEDG2, HIGH);

		lcd.setCursor(0,0);
		lcd.print("Temp:");
		lcd.print(temperatura);
		lcd.print(" graus");
		lcd.setCursor(0,1);
		lcd.print(" Projeto EC207");

		 for (int positionCounter = 0; positionCounter < 13; positionCounter++) 
		{
		    lcd.scrollDisplayRight(); 
		    delay(150);
		}

		digitalWrite(LEDR1, HIGH);
		digitalWrite(LEDR2, HIGH);
	}
	}



	if (analogRead(valorLDR)>250) //Claro
	{
		
	valorLido = analogRead(Sensor);
	temperatura = (valorLido * 0.0048875855327468);
	temperatura = temperatura *100;
	valorLDR = analogRead(sensorLDR);

	if (digitalRead(btPedestre) == LOW && digitalRead(btA) == LOW || digitalRead(btPedestre) == LOW && digitalRead(btB) == LOW) //Botão de Pedestres Ativado
	{
		analogWrite(buzzer,255);
		delay(200);
		analogWrite(buzzer,0);

		lcd.setCursor(0,0);
	   	lcd.print("LDR:");
	  	lcd.print(valorLDR);
	  	lcd.print(" Ohm");
	  	lcd.setCursor(0,1);
	  	lcd.print("Cuidado Pedestre");
	  	delay(200);
	  	
	  	digitalWrite(LEDR1, LOW);
	  	digitalWrite(LEDR2, LOW);
	  	digitalWrite(LEDG1, HIGH);
	  	digitalWrite(LEDG2, HIGH);

	  	for (int positionCounter = 0; positionCounter < 13; positionCounter++) 
	  	{
    		lcd.scrollDisplayRight(); 
    		delay(150);
		}

		lcd.clear();

		digitalWrite(LEDR1,HIGH);
		digitalWrite(LEDR2,HIGH);
	}

	if (digitalRead(btA) == LOW && digitalRead(btB) == HIGH)
	{
		for (int i = 0; i < 5; ++i)
		{
			digitalWrite(LEDR2, LOW);
			digitalWrite(LEDG1, LOW);
			digitalWrite(LEDG2, HIGH);
			digitalWrite(LEDR1, HIGH);

			int tempo1 = (5 - i);

			lcd.setCursor(0,0);
		   	lcd.print("Rua A - Siga:");
		   	lcd.setCursor(0,1);
		  	lcd.print("Tempo:");
		  	lcd.print(tempo1);
		  	delay(1000);
		  	lcd.clear();
		}
		digitalWrite(LEDR2, HIGH);
		digitalWrite(LEDG1, HIGH);

	}

		if (digitalRead(btA) == HIGH && digitalRead(btB) == LOW)
	{
		for (int i = 0; i < 5; ++i)
		{
			digitalWrite(LEDR1, LOW);
			digitalWrite(LEDG2, LOW);
			digitalWrite(LEDG1, HIGH);
			digitalWrite(LEDR2, HIGH);

			int tempo1 = (5 - i);

			lcd.setCursor(0,0);
		   	lcd.print("Rua B - Siga:");
		   	lcd.setCursor(0,1);
		  	lcd.print("Tempo:");
		  	lcd.print(tempo1);
		  	delay(1000);
		  	lcd.clear();
		}
		digitalWrite(LEDR1, HIGH);
		digitalWrite(LEDG2, HIGH);
	}

	if (digitalRead(btA) == LOW && digitalRead(btB) == LOW)
	{
		for (int i = 0; i < 5; ++i)
		{
			digitalWrite(LEDR2, LOW);
			digitalWrite(LEDG1, LOW);
			digitalWrite(LEDG2, HIGH);
			digitalWrite(LEDR1, HIGH);

			int tempo1 = (5 - i);

			lcd.setCursor(0,0);
		   	lcd.print("Rua A - Siga:");
		   	lcd.setCursor(0,1);
		  	lcd.print("Tempo:");
		  	lcd.print(tempo1);
		  	delay(1000);
		  	lcd.clear();
		}
		digitalWrite(LEDR2, HIGH);
		digitalWrite(LEDG1, HIGH);
	}

	if (digitalRead(btA) == HIGH && digitalRead(btB) == HIGH)
	{
		digitalWrite(LEDR1, LOW);
		digitalWrite(LEDR2, LOW);
		digitalWrite(LEDG1, HIGH);
		digitalWrite(LEDG2, HIGH);

		lcd.setCursor(0,0);
		lcd.print("Temp:");
		lcd.print(temperatura);
		lcd.print(" graus");
		lcd.setCursor(0,1);
		lcd.print(" Projeto EC207");

		 for (int positionCounter = 0; positionCounter < 13; positionCounter++) 
		{
		    lcd.scrollDisplayRight(); 
		    delay(150);
		}

		digitalWrite(LEDR1, HIGH);
		digitalWrite(LEDR2, HIGH);
	}
	}






}