const int ledPin =  13;    // LEDピンNo
int sensorPin = A0;        // アナログピンNo
int ledState = LOW;        // 13番ピン出力ステータス
long previousMillis = 0;   // 経過時間変数

long interval = 1000;      // アナログピン値(点滅時間)

void setup() {

  pinMode(ledPin, OUTPUT); //LEDピンNo設定
  Serial.begin(9600);      //シリアルポート初期化
  
}

void loop()
{
  interval = analogRead(sensorPin);    //アナログピン読み取り
  Serial.println(interval);            //シリアルポートに出力
  
  unsigned long currentMillis = millis(); //起動してからの経過時間を代入
 
  if(currentMillis - previousMillis > interval) {
    //intervalの値より大きくなったら13番ピン設定変更

    previousMillis = currentMillis;
    //最後に13番ピンの値を入れ替えた時間を代入

    if (ledState == LOW)
      ledState = HIGH;
    else
      ledState = LOW;

    digitalWrite(ledPin, ledState);
  }
}

