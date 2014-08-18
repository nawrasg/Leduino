#include "Arduino.h"
#include "LEDuino.h"

void Leduino::begin(int pinLED, boolean initLED, int delay){
    nPin = pinLED;
    pinMode(nPin, OUTPUT);
    nStatus = initLED;
    digitalWrite(nPin, nStatus);
    nLastChange = millis();
    nDelay = delay;
}

void Leduino::on(){
    nStatus = true;
    digitalWrite(nPin, nStatus);
}

void Leduino::off(){
    nStatus = false;
    digitalWrite(nPin, nStatus);
}

boolean Leduino::toggle(){
    nStatus = !nStatus;
    digitalWrite(nPin, nStatus);
    nLastChange = millis();
    return nStatus;
}

void Leduino::blink(){
    if((millis() - nLastChange) > nDelay){
        toggle();
    }
}
