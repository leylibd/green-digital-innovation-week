void fabricsMoisture(){
  fabricsMoistureLevel = analogRead(fabricsMoisturePin);
  Serial.print("dryness of fabrics: ");
  Serial.println(fabricsMoistureLevel);
  //delay(2000);
}