#include <LiquidCrystal.h>
#define botao_backlight 8 // Pino para verificação de acionamento do backlight
#define backlight 9 // Pino que habilita o acionamento do backlight (pelo MOSFET)
#define contraste 6 // Pino do contraste no LCD
#define ajuste1 7 // Pino para aumentar o contraste (diminui o valor do PWM no pino 6)
#define ajuste2 10 // Pino para diminuir o contraste (aumenta o valor do PWM no pino 6)

long intervalo = 6000; // Intervalo que o backlight permanecerá aceso quando for acionado
unsigned long valoranterior = 0; // Variável para atualização para contar o tempo de intervalo
unsigned char valor = 0; // Variável com o valor do contraste
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Pinos do Arduino utilizados no LCD

void setup() 
{
  pinMode(botao_backlight, INPUT); // Configurações de I/O
  pinMode(ajuste2, INPUT);
  pinMode(ajuste1, INPUT);
  pinMode(backlight, OUTPUT);
  pinMode(contraste, OUTPUT);

  lcd.begin(16, 2); // Declaração do número de linhas e colunas do display
  lcd.setCursor(0, 0); // Move o cursor para coluna 0 linha 0
  lcd.print("Bem vindo ao"); // Exibe esta mensagem na primeira linha
  lcd.setCursor(0, 1); // Move o cursor para coluna 0 linha 1
  lcd.print("Lab de Garagem !"); // Exibe mensagem na segunda linha
}

void loop() 
{
/* Essa parte monitora o pino de backlight do display e liga-o
caso o botão "backlight" seja colocado no GND. Isto por 6 segundos (valor de "intervalo") */
  unsigned long valoratual = millis(); // Valor atual que armazena o tempo a partir de quando o ATmega inicializado.

  if((digitalRead(botao_backlight)) == LOW) 
  { // Se o pino "backlight" estiver no GND,
  digitalWrite(backlight, HIGH); // Após soltar o botão, liga o backlight
  }

  if(((valoratual - valoranterior) > intervalo)) 
  { // Se passar o tempo de intervalo (no caso 6s),
  valoranterior = valoratual; // atualiza o valor anterior para uma nova contagem
  digitalWrite(backlight, LOW); // Desliga o backlight
  }

  /* Esta parte monitora os pinos de ajuste de contraste ("ajuste1" e ajuste2")
  a fim de regulá-lo no display */
  if(digitalRead(ajuste2) == LOW) 
  { // Se o pino/botão "ajuste2" for colocado no GND,
    while(digitalRead(ajuste2) == LOW) 
    { // espera até soltar o botão
      continue;
    }

    if(valor < 255) 
    { // Após soltar o botão, se o valor do PWM não for maior que o máximo (255),
    valor = valor + 5; // incrementa a variável "valor" em 5 (diminui o contraste)
    }

  analogWrite (contraste, valor); // Exibe este valor de contraste no pino Vo do display
  }

  if(digitalRead(ajuste1) == LOW)
  { // Se o pino/botão "ajuste1" for colocado no GND,
    while(digitalRead(ajuste1) == LOW) 
    { // espera até soltar o botão
    continue;
    }

    if(valor > 0) 
    { // Após soltar o botão, se o valor do PWM não for menor que mínimo (0),
    valor = valor - 5; // decrementa a variável "valor" em 5 (aumenta o contraste)
    }

  analogWrite (contraste, valor); // Exibe este valor de contraste no pino Vo do display
  }

}