//-------libraries-------
#include <DHT.h>
#include <FastLED.h>

//-------temperature lights-------
#define light 5
#define NUM_LEDS 72
CRGB leds[NUM_LEDS];


//-------temp humi sensor-------
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

//-------water level-------
#define water_power_pin 7 //digital pin to control the power of sensor, turning it on/off when needed
#define water_sensor A5 
int water_level = 0; //storing the sensor value

//------water indicator led strip--------
#define water_leds_pin A3
#define NUM_WATER_LEDS 22
CRGB water_leds[NUM_WATER_LEDS];


//--------moisture sensor-------------
#define soilMoistureSensor A0
int soilMoistureLevel;


void setup() {
  Serial.begin(9600);

  //temp humi sensor
  dht.begin(); //initialising the sensor

  //temperature lights
  FastLED.addLeds<WS2812B, light, GRB>(leds, NUM_LEDS);
	FastLED.setBrightness(255);
	FastLED.clear(true);

  //water level
  pinMode(water_power_pin, OUTPUT); //d7 pin becomes an output
  digitalWrite(water_power_pin, LOW); //turning the pin(sensor) off

  //water level indicator led strip
  FastLED.addLeds<WS2812, water_leds_pin, GRB>(water_leds, NUM_WATER_LEDS);
  //FastLED.setBrightness(100);

}

void loop() {
  //temperature and humidity
  //checking temp ---> how to check it continiously?? 
  //if too warm
    //red color ---> blinking  https://forum.arduino.cc/t/continuous-blinking-led/257898/4
  //if cold
    //blue ---> blinking  https://forum.arduino.cc/t/continuous-blinking-led/257898/4
  //else
    //default


  tempCheck();
  //humiCheck();
  
  //testColor();
  //blinkRed();

  //waterLevelCheck();

  //waterMappinTest();

  //soilMoisture();

  // water_leds[1] = CRGB(255, 255, 255);
  // FastLED.show();
  // delay(500);
  // water_leds[2] = CRGB(255, 255, 255);
  // FastLED.show();
  // delay(500);
  // water_leds[3] = CRGB(255, 255, 255);
  // FastLED.show();
  // delay(500);
  // water_leds[4] = CRGB(255, 255, 255);
  // FastLED.show();
  // delay(500);
  // water_leds[5] = CRGB(255, 255, 255);
  // FastLED.show();
  // delay(500);
  // water_leds[6] = CRGB(255, 255, 255);
  // FastLED.show();
  // delay(500);
  // water_leds[7] = CRGB(255, 255, 255);
  // FastLED.show();
  // delay(500);
  // water_leds[8] = CRGB(255, 255, 255);
  // FastLED.show();
  // delay(500);
  // water_leds[9] = CRGB(255, 255, 255);
  // FastLED.show();
  // delay(500);
  // water_leds[10] = CRGB(255, 255, 255);
  // FastLED.show();
  // delay(500);
 
}

