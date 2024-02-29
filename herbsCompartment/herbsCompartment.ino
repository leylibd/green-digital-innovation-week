//-------libraries-------
#include <DHT.h>

//-------temp humi sensor-------
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);


//--------soil moisture sensor-------------
#define soilMoisturePin A1
int soilMoistureLevel;

void setup() {
  Serial.begin(9600);

  //temp humi sensor
  dht.begin(); //initialising the sensor

}

void loop() {
  tempCheck();
  delay(2000);
  humiCheck();
  delay(2000);
  soilMoisture();
  delay(2000);

}
