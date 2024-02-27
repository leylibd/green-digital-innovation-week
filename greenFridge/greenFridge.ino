//-------libraries-------
#include <DHT.h>
#include <Servo.h>
#include <FastLED.h>

//-------lights-------
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

void setup() {
  Serial.begin(9600);

  //temp humi sensor
  dht.begin(); //initialising the sensor

  //lights
  FastLED.addLeds<WS2812B, light, GRB>(leds, NUM_LEDS);
	FastLED.setBrightness(700);
	FastLED.clear(true);

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
  humiCheck();
  //testColor();
  //blinkRed();

}

