void waterMappinTest(){
  //  FastLED.clear(true);
  int colorGreen = map(water_level, 120, 160, 0, 255); //(water level, min water, max water, min green, max green)
  int colorRed = map(water_level, 120, 160, 255, 0); //(water level, min water, max water, max red, min red)
  int ledLength = map(water_level, 120, 160, 0, 9); //min led id, max led id
  Serial.print("test lenght : ");
  Serial.println(ledLength);
  waterLevelCheck();
  // //Serial.print("green val: ");
  // // Serial.println(colorGreen);
  // Serial.print("red val: ");
  // Serial.println(colorRed);
    int rest_led = 10;
  int cGreen = int(colorGreen);
  int cRed = int(colorRed);
  int lLength = int(ledLength);
  

  // Serial.print("red val: ");
  // Serial.println(cRed);
  // delay(2000);


  // Serial.print("green val: ");
  // Serial.println(cGreen);
  // delay(2000);


  // Serial.print("length val: ");
  // Serial.println(lLength);
  // delay(2000);

  for (int i = 0; i <= lLength; i++)
  {
    water_leds[i+1] = CRGB(cRed, cGreen,0);
    // delay(100);
    FastLED.show();
    
  }
  

  for (int j; j  <= rest_led - lLength; j++){
    water_leds[rest_led-j] = CRGB::Black;
    // delay(100);
    FastLED.show();
    

  }
  

}




