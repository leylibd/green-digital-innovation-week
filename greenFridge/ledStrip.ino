void waterMappinTest(){
  float colorGreen = map(water_level, 120, 160, 0, 255); //(water level, min water, max water, min green, max green)
  float colorRed = map(water_level, 120, 160, 255, 0); //(water level, min water, max water, max red, min red)
  float ledLength = map(water_level, 120, 160, 2, 10); //min led id, max led id
  waterLevelCheck();
  // //Serial.print("green val: ");
  // // Serial.println(colorGreen);
  // Serial.print("red val: ");
  // Serial.println(colorRed);
  
  int cGreen = int(colorGreen);
  int cRed = int(colorRed);
  int lLength = int(ledLength);

  Serial.print("red val: ");
  Serial.println(cRed);
  delay(2000);


  Serial.print("green val: ");
  Serial.println(cGreen);
  delay(2000);


  Serial.print("length val: ");
  Serial.println(lLength);
  delay(2000);


}




