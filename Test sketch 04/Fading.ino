int ledPin = 9;    // LEDピンNo

void setup()  { 

} 

void loop()  { 

  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    //fadeValueの値が255になるまでfor文で繰り返しfadeValueに5を足し続ける

    analogWrite(ledPin, fadeValue);  // fadeValueの値分LEDへPWM出力
    delay(30);                            
  } 

  //fadeValueが255を超えたら次のfor文へ
  
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    //fadeValueの値が0になるまでfor文で繰り返しfadeValueから5を引き続ける

    analogWrite(ledPin, fadeValue);  // fadeValueの値分LEDへPWM出力
    delay(30);                            
  } 
}


