#include <Ultrasonic.h>     //Carrega a biblioteca Ultrasonic

#define PINO_TRIGGER  13 //Define o pino do Arduino a ser utilizado com o pino Trigger do sensor
#define PINO_ECHO     10 //Define o pino do Arduino a ser utilizado com o pino Echo do sensor

const int ledRed = 2;  
const int ledBlue = 4;
const int ledGreen = 3;  
Ultrasonic ultrasonic(PINO_TRIGGER, PINO_ECHO);

void setup()
{
  Serial.begin(9600); //Inicializa a serial
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
}

void loop()
{
  float cmMsec, inMsec;

  long microsec = ultrasonic.timing();  //Le os dados do sensor, com o tempo de retorno do sinal

  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM); //Calcula a distancia em centimetros
  inMsec = ultrasonic.convert(microsec, Ultrasonic::IN); //Calcula a distancia em polegadas
  
  Serial.print("Cent: ");
  Serial.print(cmMsec);
  Serial.println();

  analogWrite(ledRed, cmMsec+25);
  delay(1000);
  analogWrite(ledBlue, cmMsec+50);
  delay(1000);
  analogWrite(ledGreen, cmMsec);
  delay(1000);
}