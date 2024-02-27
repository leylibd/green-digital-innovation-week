void waterLevelCheck(){

  digitalWrite(water_power_pin, HIGH); //turning sensor on
  delay(10);

  water_level = analogRead(water_sensor); //get the value from the sensor
  digitalWrite(water_power_pin, LOW); //turning sensor off

  Serial.print("Water level is: ");
  Serial.println(water_level);

  // lowWater();
  // perfectWater();
  // tooMuchWater();

}

void level1(){
  if (water_level < 120) {
    Serial.print("not enough water :((");
    //red blink
    //servo on lowest
  }
}

void level2(){
  if (water_level >= 120 && water_level < 130){
    Serial.print("low water - level2");
  }
}

void level3(){
  if (water_level >= 130 && water_level < 140){
    Serial.print("ok water - level3");
  }
}

void level4(){
  if (water_level >= 140 && water_level < 150){
    Serial.print("good water - level4");
  }
}

void level5(){
  if (water_level >= 150 && water_level < 160){
    Serial.print("max water - level5");
  }
}


void tooMuchWater(){
  if (water_level >= 160){
    Serial.print("too much water!!!!!!");
  }
}

//120 - lowest
//130
//140
//150
//160 - max
