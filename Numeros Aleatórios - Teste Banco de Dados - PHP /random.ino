float n0;
float n1;
float n2;
float n3;
float n4;
String dado;

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

String dado;
   dado+=String(int(n0));
   dado+="y";
   dado+=String(int(n1));
   dado+="y";
   dado+=String(int(n2));
   dado+="y";
   dado+=String(int(n3));
   dado+="y";
   dado+=String(int(n4));
   dado+="y";
  Serial.println(dado);
  delay(1000); 



}
