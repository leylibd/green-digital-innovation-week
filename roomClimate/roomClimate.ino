//-------libraries-------
#include <DHT.h>

//-------temp humi sensor-------
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);

  //temp humi sensor
  dht.begin(); //initialising the sensor
}

void loop() {

  //--------room temp check--------------
  delay(1000); //waiting few seconds between measurements
  //reading temp
  float temp = dht.readTemperature();

  //checking if reading failed
  if (isnan(temp)) {
    Serial.println("Failed to read temp sensor!!");
  }

  else{
    Serial.print("temperature: ");
    Serial.print(temp);
    Serial.print("°C ");
  }

  //-------room humi check--------
  delay(2000); //waiting few seconds between measurements
  //reading humidity
  float humi = dht.readHumidity();

  //checking if reading failed
  if (isnan(humi)) {
    Serial.println("Failed to read humi sensor!!");
  }

  else{
    Serial.print("humidity: ");
    Serial.print(humi);
    Serial.println("%");
  }


}
