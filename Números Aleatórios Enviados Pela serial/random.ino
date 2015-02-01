float n0;
float n1;
float n2;
float n3;
float n4;
float n5;

void setup(){
  Serial.begin(9600);

  // if analog input pin 0 is unconnected, random analog
  // noise will cause the call to randomSeed() to generate
  // different seed numbers each time the sketch runs.
  // randomSeed() will then shuffle the random function.
  randomSeed(analogRead(0));
}

void loop() {
  // print a random number from 0 to 299
  //randNumber = random(300);
  //Serial.println(randNumber);  

  // print a random number from 10 to 19
  n0 = random(-10, 40);
  n1 = random(-10, 40);
  n2 = random(-10, 40);
  n3 = random(-10, 40);
  n4 = random(-10, 40);
  n5 = random(-10, 40);

  Serial.println(n0);
  delay(100);
  Serial.println(n1);
  delay(100);
  Serial.println(n2);
  delay(100);
  Serial.println(n3);
  delay(100);
  Serial.println(n4);
  delay(100);
  Serial.println(n5);
  delay(100);


}
