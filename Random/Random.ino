int LED = 2;

void setup()
{
    Serial.begin(9600);
    randomSeed(analogRead(0));
    
}

void loop()
{
  long int randNumer = random(3000);

  digitalWrite(LED,HIGH);
  delay(randNumer);
  digitalWrite(LED,LOW);

}



