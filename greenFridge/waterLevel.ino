void waterLevelCheck(){
  FastLED.clear(true);
  FastLED.setBrightness(100);

  digitalWrite(water_power_pin, HIGH); //turning sensor on
  delay(10);

  water_level = analogRead(water_sensor); //get the value from the sensor
  digitalWrite(water_power_pin, LOW); //turning sensor off

  // Serial.print("Water level is: ");
  // Serial.println(water_level);

  noWater();
  level1();
  level2();
  level3();
  level4();
  level5();
  level6();
  tooMuchWater();


  // lowWater();
  // perfectWater();
  

}

void noWater(){
  if (water_level < 110) {
    Serial.println("almost no water!!! :((  ");
    static unsigned long lastBlinkTime = 0;
    if(millis() - lastBlinkTime >= 900UL){
      water_leds[1] = CRGB(255, 0, 0);
      FastLED.show();
      FastLED.setBrightness(100);
      lastBlinkTime = millis();
      delay(200);
      FastLED.clear(true);
      //led 1 red blink
    }
    
  }
}

void level1(){
  if (water_level >=110 && water_level < 120) {
    Serial.println("very low water ");
    FastLED.clear(true);
    water_leds[1] = CRGB(229, 43, 31);
    water_leds[2] = CRGB(229, 43, 31);
    water_leds[3] = CRGB(229, 43, 31);
    FastLED.setBrightness(100);
    FastLED.show();
    

  }
}

void level2(){
  if (water_level >= 120 && water_level < 130){
    Serial.println("low water - level2  ");
    //FastLED.clear(true);
    water_leds[1] = CRGB(198, 54, 26);
    water_leds[2] = CRGB(198, 54, 26);
    water_leds[3] = CRGB(198, 54, 26);
    water_leds[4] = CRGB(198, 54, 26);
    water_leds[5] = CRGB(198, 54, 26);
    water_leds[6] = CRGB(198, 54, 26);
    water_leds[7] = CRGB(198, 54, 26);
    water_leds[8] = CRGB::Black;
    water_leds[9] = CRGB::Black;
    water_leds[10] = CRGB::Black;
    FastLED.setBrightness(100);
    FastLED.show();

  }
}

void level3(){
  if (water_level >= 130 && water_level < 140){
    Serial.println("ok water - level3  ");
    FastLED.clear(true);
    water_leds[1] = CRGB(167, 64, 21);
    water_leds[2] = CRGB(167, 64, 21);
    water_leds[3] = CRGB(167, 64, 21);
    water_leds[4] = CRGB(167, 64, 21);
    water_leds[5] = CRGB(167, 64, 21);
    water_leds[6] = CRGB(167, 64, 21);
    water_leds[7] = CRGB(167, 64, 21);
    water_leds[8] = CRGB(167, 64, 21);
    water_leds[9] = CRGB(167, 64, 21);
    water_leds[10] = CRGB(167, 64, 21);
    FastLED.show();
  }
}

void level4(){
  if (water_level >= 140 && water_level < 150){
    Serial.println("good water - level4  ");
    FastLED.clear(true);
    water_leds[1] = CRGB(136, 75, 16);
    water_leds[2] = CRGB(136, 75, 16);
    water_leds[3] = CRGB(136, 75, 16);
    water_leds[4] = CRGB(136, 75, 16);
    water_leds[5] = CRGB(136, 75, 16);
    water_leds[6] = CRGB(136, 75, 16);
    water_leds[7] = CRGB(136, 75, 16);
    water_leds[8] = CRGB(136, 75, 16);
    water_leds[9] = CRGB(136, 75, 16);
    water_leds[10] = CRGB(136, 75, 16);
    water_leds[11] = CRGB(136, 75, 16);
    water_leds[12] = CRGB(136, 75, 16);
    water_leds[13] = CRGB(136, 75, 16);
    FastLED.show();
  }
}

void level5(){
  if (water_level >= 150 && water_level < 160){
    Serial.println("max water - level5  ");
    FastLED.clear(true);
    water_leds[1] = CRGB(105, 86, 10);
    water_leds[2] = CRGB(105, 86, 10);
    water_leds[3] = CRGB(105, 86, 10);
    water_leds[4] = CRGB(105, 86, 10);
    water_leds[5] = CRGB(105, 86, 10);
    water_leds[6] = CRGB(105, 86, 10);
    water_leds[7] = CRGB(105, 86, 10);
    water_leds[8] = CRGB(105, 86, 10);
    water_leds[9] = CRGB(105, 86, 10);
    water_leds[10] = CRGB(105, 86, 10);
    water_leds[11] = CRGB(105, 86, 10);
    water_leds[12] = CRGB(105, 86, 10);
    water_leds[13] = CRGB(105, 86, 10);
    water_leds[14] = CRGB(105, 86, 10);
    water_leds[15] = CRGB(105, 86, 10);
    water_leds[16] = CRGB(105, 86, 10);
    FastLED.show();
  }
}


void level6(){
  if (water_level >= 160 && water_level < 170){
    Serial.println("max water - level6  ");
    FastLED.clear(true);
    water_leds[1] = CRGB(74, 96, 5);
    water_leds[2] = CRGB(74, 96, 5);
    water_leds[3] = CRGB(74, 96, 5);
    water_leds[4] = CRGB(74, 96, 5);
    water_leds[5] = CRGB(74, 96, 5);
    water_leds[6] = CRGB(74, 96, 5);
    water_leds[7] = CRGB(74, 96, 5);
    water_leds[8] = CRGB(74, 96, 5);
    water_leds[9] = CRGB(74, 96, 5);
    water_leds[10] = CRGB(74, 96, 5);
    water_leds[11] = CRGB(74, 96, 5);
    water_leds[12] = CRGB(74, 96, 5);
    water_leds[13] = CRGB(74, 96, 5);
    water_leds[14] = CRGB(74, 96, 5);
    water_leds[15] = CRGB(74, 96, 5);
    water_leds[16] = CRGB(74, 96, 5);
    water_leds[17] = CRGB(74, 96, 5);
    water_leds[18] = CRGB(74, 96, 5);
    water_leds[19] = CRGB(74, 96, 5);
    FastLED.show();
  }
}


void tooMuchWater(){
  if (water_level >= 170){
    Serial.println("too much water!!!!!!  ");
    FastLED.clear(true);
    water_leds[1] = CRGB(43, 107, 0);
    water_leds[2] = CRGB(43, 107, 0);
    water_leds[3] = CRGB(43, 107, 0);
    water_leds[4] = CRGB(43, 107, 0);
    water_leds[5] = CRGB(43, 107, 0);
    water_leds[6] = CRGB(43, 107, 0);
    water_leds[7] = CRGB(43, 107, 0);
    water_leds[8] = CRGB(43, 107, 0);
    water_leds[9] = CRGB(43, 107, 0);
    water_leds[10] = CRGB(43, 107, 0);
    water_leds[11] = CRGB(43, 107, 0);
    water_leds[12] = CRGB(43, 107, 0);
    water_leds[13] = CRGB(43, 107, 0);
    water_leds[14] = CRGB(43, 107, 0);
    water_leds[15] = CRGB(43, 107, 0);
    water_leds[16] = CRGB(43, 107, 0);
    water_leds[17] = CRGB(43, 107, 0);
    water_leds[18] = CRGB(43, 107, 0);
    water_leds[19] = CRGB(43, 107, 0);
    water_leds[20] = CRGB(43, 107, 0);
    water_leds[21] = CRGB(43, 107, 0);
    water_leds[22] = CRGB(43, 107, 0);
    FastLED.show();
  }
  
}

//120 - lowest
//130
//140
//150
//160 - max
