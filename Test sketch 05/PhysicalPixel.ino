const int ledPin = 13; // LEDピンNo
int incomingByte;      // シリアルポートから送信される、文字定数用の変数

void setup() {

  Serial.begin(9600);  // シリアルポート設定
  pinMode(ledPin, OUTPUT); // LED13番ピン設定
  
}

void loop() {

  if (Serial.available() > 0) {

    incomingByte = Serial.read(); //シリアルポートから送信された文字定数を代入

    if (incomingByte == 'H') {
      digitalWrite(ledPin, HIGH);
    } 

    if (incomingByte == 'L') {
      digitalWrite(ledPin, LOW);
    }
  }
}
