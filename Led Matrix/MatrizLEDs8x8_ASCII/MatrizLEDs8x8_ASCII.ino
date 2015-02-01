

#include "LedControl.h"     //We always have to include the library

const byte DIN      = 12;   //is connected to the DataIn 
const byte CS       = 11;   //is connected to LOAD (CS)
const byte CLK      = 10;   //is connected to the CLK 
const byte QTD_DISP =  1;   //have only a single MAX72XX

LedControl ledMatrix = LedControl(DIN, CLK, CS, QTD_DISP);

void setup() {
  
  //The MAX72XX is in power-saving mode on startup, we have to do a wakeup call
  ledMatrix.shutdown(0, false);  //modo 'shutdown' no display '0' é FALSE
  
  //Set the brightness to a medium values
  ledMatrix.setIntensity(0, 5);  //intensidade do display '16' é 5 (0~16)
  
  //and clear the display
  ledMatrix.clearDisplay(0);     //clear display '0'
  
}

void loop(){
  
  byte i=0, col=0, row=0;
  char texto[] = "1 2 3 4 5 6 7 8 9 10 Chupa Sergio";
  
  //ledMatrix.clearDisplay(0);     //clear display '0'
  //for (i=0; i<8; i++){
    //ledMatrix.setRow(0, i, B11111111);
    //delay(200);
    //ledMatrix.setRow(0, i, B00000000);
  //}
  
 // ledMatrix.clearDisplay(0);     //clear display '0'
  //for (i=0; i<8; i++){
    //ledMatrix.setColumn(0, i, B11111111);
    //delay(200);
  //  ledMatrix.setColumn(0, i, B00000000);
  //}
  
 // ledMatrix.clearDisplay(0);     //clear display '0'
  //for (col=0; col<8; col++){
   // for(row=0; row<8; row++){
      //ledMatrix.setLed(0, row, col, true);
     // delay(20);
    //}
  //}
  //for(row=0; row<8; row++){
    //for (col=0; col<8; col++){
      //ledMatrix.setLed(0, row, col, false);
     // delay(20);
    //}
  //}
  
  //ledMatrix.clearDisplay(0);     //clear display '0'
  //ledMatrix.printChar(0, 0, 'A');
  //delay(500);
  //ledMatrix.printChar(0, 0, 'B');
  //delay(500);
  //ledMatrix.printChar(0, 0, '\\');
  //delay(500);
  
  ledMatrix.clearDisplay(0);     //clear display '0'
  //ledMatrix.printString(0, -3, "AB");
  delay(500);
  
  //ledMatrix.clearDisplay(0);     //clear display '0'
  ledMatrix.printStringScroll(0, 0, texto, 100, '<');
  delay(900);
 // ledMatrix.printStringScroll(0, 0, texto, 50, '>');
  //delay(500);
  
}




