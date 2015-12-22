/*
 *
 * Simon Whitehead - 2015
 * ----------------------
 *
 * Just a simple wrapper around the NeoPixel class.
 *
 */

#ifndef _NEOPIXEL_MANAGER_H_
#define _NEOPIXEL_MANAGER_H_

#include <Adafruit_NeoPixel.h>

class NeoPixelManager : public Adafruit_NeoPixel {

    private:
	uint8_t _pin;

    public:
	uint8_t PinCount;

	NeoPixelManager(uint16_t n, uint8_t p=6, uint8_t t=NEO_GRB + NEO_KHZ800);
};

#endif
