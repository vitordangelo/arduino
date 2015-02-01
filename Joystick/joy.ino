void setup(){
 Serial.begin(9600); 
}
void loop(){
  int X = analogRead(A0);
  int Y = analogRead(A1);

  Serial.print("X = ");
  Serial.print(X);
  Serial.print(" Y = ");
  Serial.println(Y);
  delay(3);

}