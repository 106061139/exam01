#include "mbed.h"


AnalogOut Aout(DAC0_OUT);


int main(){

float i;

  while(1){
      Aout= 1;
      wait(1);
      Aout= 0;
      wait(1);
  }

}