#include <FastLED.h>
#include <OneButton.h>

#define NO_CLOCK_CORRECTION 1

#define NUM_LEDS  22
#define LED_PIN   6
#define BTN_PIN   2

CRGB leds[NUM_LEDS];
uint8_t patternCounter = 0;
bool isRunning = false;

OneButton btn = OneButton(BTN_PIN, true, true);

#include "AllBlank.h"
#include "WhiteLow.h"
#include "WhiteMiddle.h"
#include "RainbowBeat.h"
#include "Pink.h"

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);

  btn.attachClick(nextPattern);
}

void loop() {
  
  switch (patternCounter) {
    case 0:
      runAllBlank();
      break;
    case 1:
      runWhiteLow();
      break;
    case 2:
      runWhiteMiddle();
      break;
    case 3:
      runPink();
      break;
    case 4:
      runRainbowBeat();
      break;
  }
}

void nextPattern() {
  isRunning = false;
  patternCounter = (patternCounter + 1) % 5;
}

void runAllBlank(){
  isRunning = true;
  AllBlank allBlank = AllBlank();
  while(isRunning) allBlank.runPattern();
}

void runWhiteLow(){
  isRunning = true;
  WhiteLow whiteLow = WhiteLow();
  while(isRunning) whiteLow.runPattern();
}

void runWhiteMiddle(){
  isRunning = true;
  WhiteMiddle whiteMiddle = WhiteMiddle();
  while(isRunning) whiteMiddle.runPattern();
}

void runRainbowBeat(){
  isRunning = true;
  RainbowBeat rainbowBeat = RainbowBeat();
  while(isRunning) rainbowBeat.runPattern();
}

void runPink(){
  isRunning = true;
  Pink pink = Pink();
  while(isRunning) pink.runPattern();
}
