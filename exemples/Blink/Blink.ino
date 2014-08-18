#include <LEDuino.h>

#define pinLED 13

Leduino nLED;

void setup(){
  nLED.begin(13);
}

void loop(){
  nLED.blink();
}


