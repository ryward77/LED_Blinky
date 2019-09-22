#include "mbed.h"
/*The two LED lights will blink slower than 60Hz, so human eyes can see it.
Duty cycle is adjustable*/

// Declare and define a digital out object 
DigitalOut LEDpin1(LED1); // A class defined by mbed lib that lets you really easily control the pins
DigitalOut LEDpin2(LED2); // use LEDpin this C++ object to control the p21 and p22
DigitalOut Dpin1(p21); 
DigitalOut Dpin2(p22); 
int main() //create the int main function
{
    LEDpin1 = 1; //easy syntax to turn on the pin
    LEDpin2 = 0;
    Dpin1   = 1;
    Dpin2   = 0;
    while(true) // infinite loop
    {
        wait_ms(20.0); // 20ms wait time
        LEDpin1 = 0; 
        Dpin1   = 0;
        wait_ms(30.0);
        LEDpin2 = 1;
        Dpin2   = 1;
        wait_ms(20.0);
        LEDpin2 = 0;
        Dpin2   = 0;
        wait_ms(30.0);
        LEDpin1 = 1;
        Dpin1   = 1;
    }

}