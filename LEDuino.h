/**
    Leduino is a library to control LEDs without using the delay function.
    Created by Nawras GEORGI. http://www.nawrasg.fr
    Released under GPL version 3
*/

#ifndef LEDUINO_H
#define LEDUINO_H

#include "Arduino.h"

class Leduino{

public:
    /**
        Initialize the LED object.
        @param pinLED: the Arduino pin used for the LED,
        @param initLED: the initialize a turned on (true) or turned off (false) LED,
        @param delay: how many milliseconds before toggling the LED when using the blink function.
    */
    void begin(int pinLED, boolean initLED = false, int delay = 1000);

    /**
        Turn on the LED
    */
    void on();

    /**
        Turn off the LED
    */
    void off();

    /**
        Toggle the LED. When it's on, the function will turn it off and vice versa.
        @return the LED new state (on/true or off/false)
    */
    boolean toggle();

    /**
        Blink the LED. It should be called in the Arduino Loop function to keep blinking.
    */
    void blink();
private:
    boolean nStatus;
    unsigned long nLastChange, nDelay;
    int nPin;
};

#endif // LEDUINO_H
