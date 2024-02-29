//-------libraries-------
#include <DHT.h>
#include <FastLED.h>

//-------temperature lights-------
#define light 5
#define NUM_LEDS 144
CRGB leds[NUM_LEDS];

//-------temp humi sensor-------
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

//--------fabrics moisture sensor-------------
#define fabricsMoisturePin A1
int fabricsMoistureLevel;

void setup() {
  Serial.begin(9600);

  //temp humi sensor
  dht.begin(); //initialising the sensor

  //temperature lights
  FastLED.addLeds<WS2812B, light, GRB>(leds, NUM_LEDS);
	FastLED.setBrightness(255);
	FastLED.clear(true);

}

void loop() {
  // put your main code here, to run repeatedly:

  tempCheck();
  delay(2000);
  humiCheck();
  delay(2000);
  fabricsMoisture();
  delay(2000);
}
