 #include "Arduino.h"

class WhiteMiddle {
  public:
    WhiteMiddle(){};
    void runPattern();
  private:
};

void WhiteMiddle::runPattern() {

  fill_solid(leds, NUM_LEDS, CRGB::White);
  
  btn.tick();
  FastLED.setBrightness(120);
  FastLED.show();
}
