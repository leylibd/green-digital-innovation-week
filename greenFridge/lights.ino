void blue(){
  for(int i=0; i<NUM_LEDS; i++){
		leds[i] = CRGB(65, 81, 242); //#4151F2
	}
  //while temp is cold
	FastLED.show();
}

void red(){
  for(int i=0; i<NUM_LEDS; i++){
		leds[i] = CRGB(245, 77, 74); //#F54D4A
	}
  FastLED.show();
}

void defaultColor() {
  for(int i=0; i<NUM_LEDS; i++){
		leds[i] = CRGB(255, 255, 204); //#F54D4A
	}
  FastLED.show();
}

//-------------blinkings--------------------

void blinkBlue(){
  static unsigned long lastBlinkTime = 0;
  if(millis() - lastBlinkTime >= 900UL){
    blue();
    lastBlinkTime = millis();
    //Serial.println("blinkkkk");
    delay(400);
    FastLED.clear(true);
    //ledOn = false;
  }
}

void blinkRed(){
  static unsigned long lastBlinkTime = 0;
  if(millis() - lastBlinkTime >= 900UL){
    red();
    lastBlinkTime = millis();
    //Serial.println("blinkkkk");
    delay(400);
    FastLED.clear(true);
    //ledOn = false;
  }
}


