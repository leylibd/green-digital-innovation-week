void soilMoisture(){
  soilMoistureLevel = analogRead(soilMoisturePin);
  Serial.print("dryness of soil: ");
  Serial.println(soilMoistureLevel);
  
}