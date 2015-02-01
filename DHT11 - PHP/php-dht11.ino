// Example testing sketch for various DHT humidity/temperature sensors
// Written by ladyada, public domain

#include "DHT.h"

#define DHTPIN 2     // what pin we're connected to

// Uncomment whatever type you're using!
#define DHTTYPE DHT11   // DHT 11 
//#define DHTTYPE DHT22   // DHT 22  (AM2302)
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

// Connect pin 1 (on the left) of the sensor to +5V
// Connect pin 2 of the sensor to whatever your DHTPIN is
// Connect pin 4 (on the right) of the sensor to GROUND
// Connect a 10K resistor from pin 2 (data) to pin 1 (power) of the sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600); 
  Serial.println("DHTxx test!");
 
  dht.begin();
}

void loop() {
  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  String dado;

  // check if returns are valid, if they are NaN (not a number) then something went wrong!
  if (isnan(t) || isnan(h)) { //Retorna 1 se não for um "número"
    Serial.println("Failed to read from DHT");
  } else {

    String dado;
    dado+=String(int(t));
    dado+=",";
    dado+=String(int(h));
    Serial.println(dado);
 
    php();

    delay(1000);
  }
}


void php(){
  int Rele = 13; /** rele no pino 13 */
  int digito = 0; /** guarda retorno da porta serial */

  pinMode(Rele, OUTPUT);

  if (Serial.available()>0)
  {
    digito = Serial.read();
  }
 
/** Acionar rele "1" */

  if (digito == '1')
  {
    digitalWrite(Rele, HIGH);
    Serial.println("ligado");
  }
  
else

/** Desligar rele "0" */

  if (digito == '0')
  {
    digitalWrite(Rele, LOW);
    Serial.println("desligado");
  }
 
    digito = 0;
}