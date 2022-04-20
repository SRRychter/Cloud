#include "Arduino.h"

class AllBlank {
  public:
    AllBlank(){};
    void runPattern();
  private:
};

void AllBlank::runPattern() {
  
  fill_solid(leds, NUM_LEDS, CRGB::Black);
  
  btn.tick();
  FastLED.show();
}
