const int ledRed = 3;  
const int ledBlue = 6;
const int ledGreen = 5;   

float Red;
float Blue;
float Green; 

void setup()
{
  pinMode(ledRed, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  randomSeed(analogRead(0));
}

void loop() 
{
  Red = random(250);
  Blue = random(250);
  Green = random(250);
  
  analogWrite(ledRed, Red);
  delay(500);
  analogWrite(ledBlue, Blue);
  delay(500);
  analogWrite(ledGreen, Green);
  delay(500);  
}
