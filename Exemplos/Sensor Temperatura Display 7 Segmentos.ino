int a1 =2;
int b1 =3;
int c1  =4;
int d1 =5;
int a2 =6;
int b2 =7;
int c2  =8;
int d2 =9;
int analogPin = 5; 
int valAnalog ;       // variavel para armazenar o valor analogico lido
int temp ; 
void setup() {
  pinMode(a1, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(c1, OUTPUT);
  pinMode(d1, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(c2, OUTPUT);
  pinMode(d2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  valAnalog = analogRead(analogPin);   // Le o pino de entrada analogica 5 
  temp= ( 5 * valAnalog * 100) / 1024 ; // calcula a temperatura  
  Serial.println(temp);
  
  switch (temp) {
    case 1:
    digitalWrite(a1, HIGH);
    digitalWrite(b1, LOW);
    digitalWrite(c1, LOW);
    digitalWrite(d1, LOW); 
   break;
   case 2:
  digitalWrite(a1, LOW);
    digitalWrite(b1, HIGH);
    digitalWrite(c1, LOW);
    digitalWrite(d1, LOW); 
   break;
  case 3:
  digitalWrite(a1, HIGH);
    digitalWrite(b1, HIGH);
    digitalWrite(c1, LOW);
    digitalWrite(d1, LOW); 
   break;
   case 4:
   digitalWrite(a1, LOW);
    digitalWrite(b1, LOW);
    digitalWrite(c1, LOW);
    digitalWrite(d1, HIGH); 
   break;
  case 5:
  digitalWrite(a1, HIGH);
    digitalWrite(b1, LOW);
    digitalWrite(c1, LOW);
    digitalWrite(d1, HIGH); 
    break;
 
  case 6:
  digitalWrite(a1, LOW);
    digitalWrite(b1, HIGH);
    digitalWrite(c1, LOW);
    digitalWrite(d1, HIGH); 
    break;
 
  case 7:
  digitalWrite(a1, HIGH);
    digitalWrite(b1, HIGH);
    digitalWrite(c1, LOW);
    digitalWrite(d1, HIGH); 
    break;
    case 8:
  digitalWrite(a1, LOW);
    digitalWrite(b1, LOW);
    digitalWrite(c1, HIGH);
    digitalWrite(d1, LOW); 
   break;
   case 9:
  digitalWrite(a1, HIGH);
    digitalWrite(b1, LOW);
    digitalWrite(c1, HIGH);
    digitalWrite(d1, LOW); 
    break;
    
    case 10:
    digitalWrite(a2, HIGH);
    digitalWrite(b2, LOW);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW);
    
    digitalWrite(a1, LOW);
    digitalWrite(b1, LOW);
    digitalWrite(c1, LOW);
    digitalWrite(d1, LOW);
    break;
    
    case 11:
    digitalWrite(a2, HIGH);
    digitalWrite(b2, LOW);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW);
    
    digitalWrite(a1, HIGH);
    digitalWrite(b1, LOW);
    digitalWrite(c1, LOW);
    digitalWrite(d1, LOW); 
    break;
    case 12:
    digitalWrite(a2, HIGH);
    digitalWrite(b2, LOW);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW);
    
    digitalWrite(a1, LOW);
    digitalWrite(b1, HIGH);
    digitalWrite(c1, LOW);
    digitalWrite(d1, LOW); 
    break;
    case 13:
    digitalWrite(a2, HIGH);
    digitalWrite(b2, LOW);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW);
    
  digitalWrite(a1, HIGH);
    digitalWrite(b1, HIGH);
    digitalWrite(c1, LOW);
    digitalWrite(d1, LOW); 
    break;
    case 14:
    digitalWrite(a2, HIGH);
    digitalWrite(b2, LOW);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW);
    
    digitalWrite(a1, LOW);
    digitalWrite(b1, LOW);
    digitalWrite(c1, LOW);
    digitalWrite(d1, HIGH); 
    break;
    case 15:
    digitalWrite(a2, HIGH);
    digitalWrite(b2, LOW);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW);
    
    digitalWrite(a1, HIGH);
    digitalWrite(b1, LOW);
    digitalWrite(c1, LOW);
    digitalWrite(d1, HIGH); 
    break;
    case 16:
    digitalWrite(a2, HIGH);
    digitalWrite(b2, LOW);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW);
    
    digitalWrite(a1, LOW);
    digitalWrite(b1, HIGH);
    digitalWrite(c1, LOW);
    digitalWrite(d1, HIGH);
    break;
    case 17:
    digitalWrite(a2, HIGH);
    digitalWrite(b2, LOW);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW);
    
    digitalWrite(a1, HIGH);
    digitalWrite(b1, HIGH);
    digitalWrite(c1, LOW);
    digitalWrite(d1, HIGH); 
    break;
    case 18:
    digitalWrite(a2, HIGH);
    digitalWrite(b2, LOW);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW);
    
    digitalWrite(a1, LOW);
    digitalWrite(b1, LOW);
    digitalWrite(c1, HIGH);
    digitalWrite(d1, LOW); 
    break;
    case 19:
    digitalWrite(a2, HIGH);
    digitalWrite(b2, LOW);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW);
    
    digitalWrite(a1, HIGH);
    digitalWrite(b1, LOW);
    digitalWrite(c1, HIGH);
    digitalWrite(d1, LOW);
    break;
  case 20:  
    digitalWrite(a2, LOW);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW);
    digitalWrite(a1, LOW);
    digitalWrite(b1, LOW);
    digitalWrite(c1, LOW);
    digitalWrite(d1, LOW);
    
    break;
  case 21:    // your hand is close to the sensor
      digitalWrite(a2, LOW);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW);
    digitalWrite(a1, HIGH);
    digitalWrite(b1, LOW);
    digitalWrite(c1, LOW);
    digitalWrite(d1, LOW); 
    break;
  case 22:    // your hand is a few inches from the sensor
      digitalWrite(a2, LOW);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW); 
    digitalWrite(a1, LOW);
    digitalWrite(b1, HIGH);
    digitalWrite(c1, LOW);
    digitalWrite(d1, LOW);  
    break;
  case 23:    // your hand is nowhere near the sensor
      digitalWrite(a2, LOW);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW); 
    digitalWrite(a1, HIGH);
    digitalWrite(b1, HIGH);
    digitalWrite(c1, LOW);
    digitalWrite(d1, LOW); 
    break;
    case 24:
      digitalWrite(a2, LOW);
      digitalWrite(b2, HIGH);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW);
    digitalWrite(a1, LOW);
    digitalWrite(b1, LOW);
    digitalWrite(c1, LOW);
    digitalWrite(d1, HIGH); 
    break;
    
        case 25:
      digitalWrite(a2, LOW);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW);
    digitalWrite(a1, HIGH);
    digitalWrite(b1, LOW);
    digitalWrite(c1, LOW);
    digitalWrite(d1, HIGH);     
    break;    
    case 26:
      digitalWrite(a2, LOW);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW);
    digitalWrite(a1, LOW);
    digitalWrite(b1, HIGH);
    digitalWrite(c1, LOW);
    digitalWrite(d1, HIGH); 
    break;  
    case 27:
      digitalWrite(a2, LOW);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW);;
    digitalWrite(a1, HIGH);
    digitalWrite(b1, HIGH);
    digitalWrite(c1, LOW);
    digitalWrite(d1, HIGH); 
    
    break;   
    case 28:
      digitalWrite(a2, LOW);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW);
    digitalWrite(a1, LOW);
    digitalWrite(b1, LOW);
    digitalWrite(c1, HIGH);
    digitalWrite(d1, LOW); 
    
    break;  
    case 29:
      digitalWrite(a2, LOW);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW);
    digitalWrite(a1, HIGH);
    digitalWrite(b1, LOW);
    digitalWrite(c1, HIGH);
    digitalWrite(d1, LOW); 
    break;   
    case 30:
    digitalWrite(a2, HIGH);
    digitalWrite(b2, HIGH);
    digitalWrite(c2, LOW);
    digitalWrite(d2, LOW); 
    digitalWrite(a1, LOW);
    digitalWrite(b1, LOW);
    digitalWrite(c1, LOW);
    digitalWrite(d1, LOW);
    break;
  }
}