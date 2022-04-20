#include "Arduino.h"

class WhiteLow {
  public:
    WhiteLow(){};
    void runPattern();
  private:
};

void WhiteLow::runPattern() {
  
  fill_solid(leds, NUM_LEDS, CRGB::White);
  
  btn.tick();
  FastLED.setBrightness(60);
  FastLED.show();
}
