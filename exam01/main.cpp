#include "mbed.h"
#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);
AnalogOut Aout(DAC0_OUT);


int main(){
    uLCD.printf("\n106061139\n");
  while(1){
      Aout= 1;
      wait(1);
      Aout= 0;
      wait(1);
  }

}