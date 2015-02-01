const int LED1 = 1;
const int LED2 = 4;
const int LED3 = 7;
const int LED4 = 9;

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
}

void loop() {
  
  digitalWrite(LED1,HiGH);
  delay(500);
  digitalWrite(LED1,LOW);
  delay(500);
  
  digitalWrite(LED2,HiGH);
  delay(500);
  digitalWrite(LED2,LOW);
  delay(500);
   
  digitalWrite(LED3,HiGH);
  delay(500);
  digitalWrite(LED3,LOW);
  delay(500);

  digitalWrite(LED4,HiGH);
  delay(500);
  digitalWrite(LED4,LOW);
  delay(500);

}