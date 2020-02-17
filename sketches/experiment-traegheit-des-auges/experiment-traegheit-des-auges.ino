
/*
 * Algorithmus: Zeitspanne (1000 ms) / 2 * Anzahl der Wiederholungen (30)
 * Wir müssen das Ergebnis halbieren, da ein Blinken aus zwei Befehlen besteht - an und aus. 
 */

#include <Adafruit_NeoPixel.h>
#define PIN   D4
#define LED_NUM 7

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel leds = Adafruit_NeoPixel(LED_NUM, PIN, NEO_GRB + NEO_KHZ800);



void setup() {
  leds.begin(); // This initializes the NeoPixel library.
}



void led_set(uint8 R, uint8 G, uint8 B, uint8 delayInMs) {
  for (int i = 0; i < LED_NUM; i++) {
    leds.setPixelColor(i, leds.Color(R, G, B));
    leds.show();
    delay(delayInMs);
  }

   for (int i = 0; i < leds.numPixels() - 1; i++) {
    leds.fill(leds.Color(B, R, G), 0, i);
    leds.show();
    delay(50);
  }
}

void loop() {

  int r = 0;
  int g = 0;
  int b = 0;


    for (int hue = 0; hue < 65536 ; hue++) {
      uint32_t rgbcolor = leds.ColorHSV(hue, 255, 64);
      leds.fill(rgbcolor);
      leds.show();
      delay(1);
          
    }
    
}


  /*

  int delayLedOn = 50;
  int delayLedOff = 15;
  
  led_set(10, 0, 0, delayLedOn);//red
  led_set(0, 0, 0, delayLedOff);

  led_set(0, 10, 0, delayLedOn);//green
  led_set(0, 0, 0, delayLedOff);

  led_set(0, 0, 10, delayLedOn);//blue
  led_set(0, 0, 0, delayLedOff);

  */
