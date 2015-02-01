#include <LiquidCrystal.h>

const int Sensor=7;
int valorLido=0;
float temperatura=0;

int button1=14; //Sensor Rua A
int button2=13; //Sensor Rua B

int redpin1=9;      //Pin 9
int greenpin1=10;    //Pin 10
int redpin2=11; 
int greenpin2=12;     //Pin 11

int buzzer=8;
int buttonPedestre=6;

int SensorLDR=A0;
float LDR=0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() 
{
  lcd.begin(16,2);

  pinMode (button1, INPUT);
  pinMode (button2, INPUT);
  pinMode (buzzer, OUTPUT);
  pinMode (buttonPedestre, INPUT);
}


void loop() 
{

  valorLido = analogRead(Sensor);
  temperatura = (valorLido * 0.0048875855327468);
  temperatura = temperatura * 100;
  LDR = analogRead(SensorLDR);

  if (LDR <= 250) //Pouca Luz
  { 
    if (digitalRead(button1) == LOW && digitalRead(button2) == HIGH)  
    {
        analogWrite(redpin1,0);  
        analogWrite(greenpin1,255);
        analogWrite(redpin2,255);  
        analogWrite(greenpin2,0);
        lcd.setCursor(0,0);
        lcd.print("Rua A");
        lcd.setCursor(0,1);
        lcd.print("Siga!");
        delay(4000);
        lcd.clear();

        analogWrite(redpin1,255);  
        analogWrite(greenpin1,255);
        analogWrite(redpin2,255);  
        analogWrite(greenpin2,255);
        lcd.setCursor(0,0);
        lcd.print("Rua A");
        lcd.setCursor(0,1);
        lcd.print("Cuidado!");
        delay(2000);
        lcd.clear();

        analogWrite(redpin1,255);  
        analogWrite(greenpin1,0);
        analogWrite(redpin2,0);  
        analogWrite(greenpin2,255);
        lcd.setCursor(0,0);
        lcd.print("Rua A");
        lcd.setCursor(0,1);
        lcd.print("Pare!");
        delay(4000);
        lcd.clear();
    }

    if (digitalRead(button1) == HIGH && digitalRead(button2) == LOW)  
    {
        analogWrite(redpin1,255);  
        analogWrite(greenpin1,0);
        analogWrite(redpin2,0);  
        analogWrite(greenpin2,255);
        lcd.setCursor(0,0);
        lcd.print("Rua B");
        lcd.setCursor(0,1);
        lcd.print("Siga!");
        delay(4000);
        lcd.clear();

        analogWrite(redpin1,255);  
        analogWrite(greenpin1,255);
        analogWrite(redpin2,255);  
        analogWrite(greenpin2,255);
        lcd.setCursor(0,0);
        lcd.print("Rua B");
        lcd.setCursor(0,1);
        lcd.print("Cuidado!");
        delay(2000);
        lcd.clear();

        analogWrite(redpin1,0);  
        analogWrite(greenpin1,255);
        analogWrite(redpin2,255);  
        analogWrite(greenpin2,0);
        lcd.setCursor(0,0);
        lcd.print("Atenção");
        lcd.setCursor(0,1);
        lcd.print("Pare!");
        delay(4000);
        lcd.clear();
    }

    if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH)  
    {
        analogWrite(redpin1,0);  
        analogWrite(greenpin1,255);
        analogWrite(redpin2,255);  
        analogWrite(greenpin2,0);
        lcd.setCursor(0,0);
        lcd.print("Rua A");
        lcd.setCursor(0,1);
        lcd.print("Siga!");
        delay(4000);
        lcd.clear();

        analogWrite(redpin1,255);  
        analogWrite(greenpin1,255);
        analogWrite(redpin2,255);  
        analogWrite(greenpin2,255);
        lcd.setCursor(0,0);
        lcd.print("Rua A");
        lcd.setCursor(0,1);
        lcd.print("Cuidado!");
        delay(2000);
        lcd.clear();

        analogWrite(redpin1,255);  
        analogWrite(greenpin1,0);
        analogWrite(redpin2,0);  
        analogWrite(greenpin2,255);
        lcd.setCursor(0,0);
        lcd.print("Rua A");
        lcd.setCursor(0,1);
        lcd.print("Pare!");
        delay(4000);
        lcd.clear();
    }

    if (digitalRead(button1) == 0 && digitalRead(button2) == 0)
    {
        analogWrite(redpin1,255);  
        analogWrite(greenpin1,0);
        analogWrite(redpin2,255);  
        analogWrite(greenpin2,0);   

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
    }
  
    if (buttonPedestre == LOW)
    {
        analogWrite(redpin1,255);  
        analogWrite(greenpin1,0);
        analogWrite(redpin2,255);  
        analogWrite(greenpin2,0);

        digitalWrite(buzzer, HIGH);
        delay(500);
        digitalWrite(buzzer, LOW);
        delay(3000);
        digitalWrite(buzzer, HIGH);
        delay(500);
        digitalWrite(buzzer, LOW);
    }
  }



    if (LDR > 250) //Claro
  { 
    if (digitalRead(button1) == LOW && digitalRead(button2) == HIGH)  
    {
        analogWrite(redpin1,0);  
        analogWrite(greenpin1,255);
        analogWrite(redpin2,255);  
        analogWrite(greenpin2,0);
        lcd.setCursor(0,0);
        lcd.print("Rua A");
        lcd.setCursor(0,1);
        lcd.print("Siga!");
        delay(3000);
        lcd.clear();

        analogWrite(redpin1,255);  
        analogWrite(greenpin1,255);
        analogWrite(redpin2,255);  
        analogWrite(greenpin2,255);
        lcd.setCursor(0,0);
        lcd.print("Rua A");
        lcd.setCursor(0,1);
        lcd.print("Cuidado!");
        delay(1000);
        lcd.clear();

        analogWrite(redpin1,255);  
        analogWrite(greenpin1,0);
        analogWrite(redpin2,0);  
        analogWrite(greenpin2,255);
        lcd.setCursor(0,0);
        lcd.print("Rua A");
        lcd.setCursor(0,1);
        lcd.print("Pare!");
        delay(3000);
        lcd.clear();
    }

    if (digitalRead(button1) == HIGH && digitalRead(button2) == LOW)  
    {
        analogWrite(redpin1,255);  
        analogWrite(greenpin1,0);
        analogWrite(redpin2,0);  
        analogWrite(greenpin2,255);
        lcd.setCursor(0,0);
        lcd.print("Rua B");
        lcd.setCursor(0,1);
        lcd.print("Siga!");
        delay(3000);
        lcd.clear();

        analogWrite(redpin1,255);  
        analogWrite(greenpin1,255);
        analogWrite(redpin2,255);  
        analogWrite(greenpin2,255);
        lcd.setCursor(0,0);
        lcd.print("Rua B");
        lcd.setCursor(0,1);
        lcd.print("Cuidado!");
        delay(1000);
        lcd.clear();

        analogWrite(redpin1,0);  
        analogWrite(greenpin1,255);
        analogWrite(redpin2,255);  
        analogWrite(greenpin2,0);
        lcd.setCursor(0,0);
        lcd.print("Atenção");
        lcd.setCursor(0,1);
        lcd.print("Pare!");
        delay(3000);
        lcd.clear();
    }

    if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH)  
    {
        analogWrite(redpin1,0);  
        analogWrite(greenpin1,255);
        analogWrite(redpin2,255);  
        analogWrite(greenpin2,0);
        lcd.setCursor(0,0);
        lcd.print("Rua A");
        lcd.setCursor(0,1);
        lcd.print("Siga!");
        delay(3000);
        lcd.clear();

        analogWrite(redpin1,255);  
        analogWrite(greenpin1,255);
        analogWrite(redpin2,255);  
        analogWrite(greenpin2,255);
        lcd.setCursor(0,0);
        lcd.print("Rua A");
        lcd.setCursor(0,1);
        lcd.print("Cuidado!");
        delay(1000);
        lcd.clear();

        analogWrite(redpin1,255);  
        analogWrite(greenpin1,0);
        analogWrite(redpin2,0);  
        analogWrite(greenpin2,255);
        lcd.setCursor(0,0);
        lcd.print("Rua A");
        lcd.setCursor(0,1);
        lcd.print("Pare!");
        delay(3000);
        lcd.clear();
    }

    if (digitalRead(button1) == 0 && digitalRead(button2) == 0)
    {
        analogWrite(redpin1,255);  
        analogWrite(greenpin1,0);
        analogWrite(redpin2,255);  
        analogWrite(greenpin2,0);   

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
    }

    if (buttonPedestre == LOW)
    {
        analogWrite(redpin1,255);  
        analogWrite(greenpin1,0);
        analogWrite(redpin2,255);  
        analogWrite(greenpin2,0);

        digitalWrite(buzzer, HIGH);
        delay(500);
        digitalWrite(buzzer, LOW);
        delay(3000);
        digitalWrite(buzzer, HIGH);
        delay(500);
        digitalWrite(buzzer, LOW);
    }



  }
}

  


























