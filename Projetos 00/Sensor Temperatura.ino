#include <LiquidCrystal.h>

const int Sensor = 7;
int valorLido = 0;
float temperatura = 0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16,2);
}


void loop() {
  valorLido = analogRead(Sensor);
  temperatura = (valorLido * 0.0048875855327468);
  temperatura = temperatura * 100;

  lcd.setCursor(0,0);
  lcd.print("Temp:");
  lcd.print(temperatura);
  lcd.print(" graus");
  lcd.setCursor(0,1);
  lcd.print("Tempo:");
  lcd.print(millis()/1000);
  lcd.print(" seg");
  delay(1000);

}