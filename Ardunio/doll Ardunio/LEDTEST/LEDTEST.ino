//We always have to include the library
#include "LedControl.h"

/*
 Now we need a LedControl to work with.
 ***** These pin numbers will probably not work with your hardware *****
 pin 12 is connected to the DataIn 
 pin 11 is connected to the CLK 
 pin 10 is connected to LOAD 
 We have only a single MAX72XX.
 */
LedControl lc=LedControl(12,11,10,4);


/* we always wait a bit between updates of the display */
unsigned long delaytime=600;

void setup() {
  /*
   The MAX72XX is in power-saving mode on startup,
   we have to do a wakeup call
   */
  lc.shutdown(0,false);
  /* Set the brightness to a medium values */
  lc.setIntensity(0,8);
  /* and clear the display */
  lc.clearDisplay(0);


   lc.shutdown(1,false);
  /* Set the brightness to a medium values */
  lc.setIntensity(1,8);
  /* and clear the display */
  lc.clearDisplay(1);

   lc.shutdown(2,false);
  /* Set the brightness to a medium values */
  lc.setIntensity(2,8);
  /* and clear the display */
  lc.clearDisplay(2);


   lc.shutdown(3,false);
  /* Set the brightness to a medium values */
  lc.setIntensity(3,8);
  /* and clear the display */
  lc.clearDisplay(3);
}

/*
 This method will display the characters for the
 word "Arduino" one after the other on the matrix. 
 (you need at least 5x7 leds to see the whole chars)
 */
void smile() {
  /* here is the data for the characters */

  // K
  byte leye[8]={
    B00110000,
    B00011100,
    B00001110,
    B00000111,
    B00000111,
    B00001110,
    B00011100,
    B00110000};

    byte reye[8]={
    B00011000,
    B00111100,
    B01111110,
    B01100110,
    B11000011,
    B10000001,
    B00000000,
    B00000000};
  
  byte rm[8]={
  B00000001,
  B00000110,
  B00001000,
  B00010000,
  B00110000,
  B01100000,
  B11100000,
  B11100000};
  
  byte lm[8]={
  B11100000,
  B11100000,
  B01100000,
  B00110000,
  B00010000,
  B00001000,
  B00000110,
  B00000001};

  


  
 
  


  /* Letter   */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,leye[i]);

  }  

   for (int i=0; i<8; i++){
  lc.setRow(1,i,reye[i]);

  }

     for (int i=0; i<8; i++){
  lc.setRow(2,i,lm[i]);

  }

       for (int i=0; i<8; i++){
  lc.setRow(3,i,rm[i]);

  }
}


void sad() {
  /* here is the data for the characters */

  // K
  byte leye[8]={
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000};

    byte reye[8]={
    B00000000,
    B00000000,
    B00000000,
    B11111111,
    B11111111,
    B00000000,
    B00000000,
    B00000000};
  
  byte rm[8]={
B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000};
  
  byte lm[8]={
B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000,
    B00011000};

  


  
 
  


  /* Letter   */
  for (int i=0; i<8; i++){
  lc.setRow(0,i,leye[i]);

  }  

   for (int i=0; i<8; i++){
  lc.setRow(1,i,reye[i]);

  }

     for (int i=0; i<8; i++){
  lc.setRow(2,i,lm[i]);

  }

       for (int i=0; i<8; i++){
  lc.setRow(3,i,rm[i]);

  }
}




void loop() { 
 sad();

}
 
