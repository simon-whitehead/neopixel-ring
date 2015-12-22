/*
 *
 * Simon Whitehead - 2015
 * ----------------------
 *
 * Just a simple wrapper around the NeoPixel class.
 *
 */

#include "NeoPixelManager.h"

#include <Adafruit_NeoPixel.h>

NeoPixelManager::NeoPixelManager(uint16_t n, uint8_t p, uint8_t t) : Adafruit_NeoPixel(n, p, t) {
    this->PinCount = n;
    this->_pin = p;

    this->setBrightness(40);

    digitalWrite(p, HIGH);

    this->begin();
}
