void soilMoisture(){
  soilMoistureLevel = analogRead(soilMoistureSensor);
  Serial.print("dryness: ");
  Serial.println(soilMoistureLevel);
  delay(2000);
}