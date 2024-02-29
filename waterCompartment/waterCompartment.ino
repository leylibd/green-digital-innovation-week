//----------libraries-------------
#include <FastLED.h>

//-------water level-------
#define water_power_pin 7 //digital pin to control the power of sensor, turning it on/off when needed
#define water_sensor A5 
int water_level = 0; //storing the sensor value

//------water level indicator led strip--------
#define water_leds_pin A3
#define NUM_WATER_LEDS 22
CRGB water_leds[NUM_WATER_LEDS];


void setup() {
  Serial.begin(9600);

  //water level
  pinMode(water_power_pin, OUTPUT); //d7 pin becomes an output
  digitalWrite(water_power_pin, LOW); //turning the pin(sensor) off

  //water level indicator led strip
  FastLED.addLeds<WS2812, water_leds_pin, GRB>(water_leds, NUM_WATER_LEDS);
  //FastLED.setBrightness(100);


}

void loop() {
  waterLevelCheck();

}
