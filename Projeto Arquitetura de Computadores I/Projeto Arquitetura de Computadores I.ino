#include <LiquidCrystal.h>

const int Sensor = 7;
int valorLido = 0;
float temperatura = 0;
int LED1 = 9; //Rua A - LED Verde
int LED2 = 8; //Rua A - LED Vermelho
int LED3 = 10; //Rua A - LED Amarelo
int LED4 = 7; //Rua B - LED Verde
int LED5 = 6; //Rua B - LED Amarelo
int LED6 = 0; //Rua B- LED Vermelho
int button1 = 1; //Sensor Rua A
int button2 = 13; //Sensor Rua B

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16,2);
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (LED4, OUTPUT);
  pinMode (LED5, OUTPUT);
  pinMode (LED6, OUTPUT);
  pinMode (button1, INPUT);
  pinMode (button2, INPUT);
}


void loop() {

  valorLido = analogRead(Sensor);
  temperatura = (valorLido * 0.0048875855327468);
  temperatura = temperatura * 100;

  if (digitalRead(button1) == HIGH)
  {
    digitalWrite(LED6, HIGH);
    digitalWrite(LED2,LOW);
    AcendeLedVerdeRuaA();
    AcendeLedAmareloRuaA();
    AcendeLedVermelhoRuaA();
    digitalWrite(LED6, HIGH);
  }
  lcd.clear();

 if (digitalRead(button2) == HIGH)
  {
    digitalWrite(LED2, HIGH);
    digitalWrite(LED6,LOW);
    AcendeLedVerdeRuaB();
    AcendeLedAmareloRuaB();
    AcendeLedVermelhoRuaB();
    
  }
  lcd.clear();

while (digitalRead(button1) != HIGH && digitalRead(button2) != HIGH )
{
  digitalWrite(LED2, HIGH);
  digitalWrite(LED6, HIGH);

  lcd.setCursor(0,0);
  lcd.print("Temp:");
  lcd.print(temperatura);
  lcd.print(" graus");
  lcd.setCursor(0,1);
  lcd.print(" Projeto EC207");

  for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    lcd.scrollDisplayRight(); 
    delay(150);
  }


}
/*  AcendeLedVerdeRuaA();
  AcendeLedAmareloRuaA();
  AcendeLedVermelhoRuaA();
  AcendeLedVerdeRuaB();
  AcendeLedAmareloRuaB();
  AcendeLedVermelhoRuaB();*/

 
}


void AcendeLedVerdeRuaA(){
  for (int i = 3; i > 0; --i)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" Rua A - Siga ");
    lcd.setCursor(0,1);
    lcd.print("Tempo:");
    lcd.setCursor(8,1);
    lcd.print(i);    
    digitalWrite (LED1, HIGH);
    delay(1000);
  }
  digitalWrite (LED1, LOW);
}

void AcendeLedAmareloRuaA(){
  for (int i = 2; i > 0; --i)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Rua A - Atencao");
    lcd.setCursor(0,1);
    lcd.print("Tempo:");
    lcd.setCursor(8,1);
    lcd.print(i);    
    digitalWrite (LED3, HIGH);
    delay(1000);
  }
  digitalWrite (LED3, LOW);
}


void AcendeLedVermelhoRuaA(){
  for (int i = 1; i > 0; --i)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Rua A - Pare");
    lcd.setCursor(0,1);
    lcd.print("Tempo:");
    lcd.setCursor(8,1);
    lcd.print(i);    
    digitalWrite (LED2, HIGH);
    delay(1000);
  }
  digitalWrite (LED2, LOW); 
}

void AcendeLedVerdeRuaB(){
  for (int i = 3; i > 0; --i)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" Rua B - Siga ");
    lcd.setCursor(0,1);
    lcd.print("Tempo:");
    lcd.setCursor(8,1);
    lcd.print(i);    
    digitalWrite (LED4, HIGH);
    delay(1000);
  }
   digitalWrite (LED4, LOW);
}

void AcendeLedAmareloRuaB(){
  for (int i = 2; i > 0; --i)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Rua B - Atencao");
    lcd.setCursor(0,1);
    lcd.print("Tempo:");
    lcd.setCursor(8,1);
    lcd.print(i);    
    digitalWrite (LED5, HIGH);
    delay(1000);
  }
    digitalWrite (LED5, LOW);
}


void AcendeLedVermelhoRuaB(){
  for (int i = 1; i > 0; --i)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Rua B - Pare");
    lcd.setCursor(0,1);
    lcd.print("Tempo:");
    lcd.setCursor(8,1);
    lcd.print(i);    
    digitalWrite (LED6, HIGH);
    delay(1000);
  }
    digitalWrite (LED6, LOW);
}
