#include "mbed.h"
#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);
AnalogOut Aout(DAC0_OUT);
PwmOut PWM1(D6);
Serial pc( USBTX, USBRX );
DigitalOut D(D0);
float data[128];

int main(){
    float p;
   
 //   while(1){
    uLCD.printf("\n106061139\n");
    PWM1.period(0.001);
    for(float i=0; i<1;i+=0.1){       
        PWM1 = i;
        p=PWM1;
        wait(0.1);
        pc.printf("%1.3f\r\n",p);  
    }
    for(float i=1; i<0;i-=0.1){   
        PWM1 = i;
        p=PWM1;
        wait(0.1);
        pc.printf("%1.3f\r\n",p);  
    }
  
 //     Aout= 1;
 //     wait(1);
 //     Aout= 0;
 //     wait(1);
//  }

}
