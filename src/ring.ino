/*
 *
 * Simon Whitehead - 2015
 * ----------------------
 *
 * This loops two colours around a 5V, 12 pixel NeoPixel Ring. This
 * is just me playing with the Adafruit Trinket v3.
 *
 * Ring code: 12xWS2812
 *
 */

#include "NeoPixelManager.h"

void loopColor(uint32_t);

NeoPixelManager neoPixelRing(12, 12);
int delayval = 75;      // delay for 75ms

void setup() {
}

void loop() {
    loopColor(neoPixelRing.Color(150, 0, 0));
    loopColor(neoPixelRing.Color(0, 150, 0));
}

void loopColor(uint32_t color) {
    for (int i = 0; i < neoPixelRing.PinCount; i++) {
        neoPixelRing.setPixelColor(i, color); 
        neoPixelRing.show();

        delay(delayval); 
    }
}
