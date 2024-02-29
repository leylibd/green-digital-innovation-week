void tempCheck(){
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

}


void humiCheck(){
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
