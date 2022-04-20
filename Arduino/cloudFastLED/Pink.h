#include "Arduino.h"

class Pink {
  public:
    Pink(){};
    void runPattern();
  private:
};

void Pink::runPattern() {
  
  fill_solid(leds, NUM_LEDS, CRGB::DeepPink);
  
  btn.tick();
  FastLED.setBrightness(120);
  FastLED.show();
}
