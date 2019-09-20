#include "mbed.h"
// Declare and define a digital out object 
DigitalOut LEDpin1(LED1); // A class defined by mbed lib that lets you really easily control the pins
DigitalOut LEDpin2(LED2); // use LEDpin this C++ object to control the p21 and p22

int main() //create the int main function
{
    LEDpin1 = 1; //easy syntax to turn on the pin
    LEDpin2 = 0;
    while(true) // infinite loop
    {
        wait(0.5f); // 0.5 s wait time
        LEDpin1 = 0; 
        wait(0.5f);
        LEDpin2 = 1;
        wait(0.5f);
        LEDpin2 = 0;
        wait(0.5f);
        LEDpin1 = 1;
    }

}