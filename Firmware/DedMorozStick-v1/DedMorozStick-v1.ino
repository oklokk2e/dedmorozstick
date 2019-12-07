#include <Adafruit_NeoPixel.h>
#include <avr/power.h>
int tie = 0;
int toe = 0;
#ifdef __AVR__
#endif
#define PIN 6
#define NUMPIXELS 64
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
#define DELAYVAL 500
int a = -1;
int b = -20;
int c = -40;
int d = -60;
void setup() {
  Serial.begin(9600);
  pixels.begin();
}
void loop() {
  pixels.clear();
  for (int i = 0; i < 64000; i++) {
    Serial.print(a++);
    Serial.print(" ");
    Serial.print(b++);
    Serial.print(" ");
    Serial.print(c++);
    Serial.print(" ");
    Serial.println(d++);
    if (a >= 0) {
      pixels.setPixelColor(a, pixels.Color(15, 25, 150));
    }
    if (b >= 0) {
      pixels.setPixelColor(b, pixels.Color(15, 25, 150));
    }
    if (c >= 0) {
      pixels.setPixelColor(c, pixels.Color(15, 25, 150));
    }
    if (d >= 0) {
      pixels.setPixelColor(d, pixels.Color(15, 25, 150));
    }
    pixels.show();
    delay(100);

  }
}
