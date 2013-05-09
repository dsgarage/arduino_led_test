const int buttonPin = 2;     // スイッチピンNo設定
const int ledPin =  13;      // LEDピンNo設定

// variables will change:
int buttonState = 0;         // ボタン押下時の変数

void setup() {
  pinMode(ledPin, OUTPUT);      

  pinMode(buttonPin, OUTPUT); //OUTPUTに書き換え
}

void loop(){
  //ボタン読み取り
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {     
    digitalWrite(ledPin, HIGH);  //押していれば13番をHIGHに
  } 
  else {
    digitalWrite(ledPin, LOW);   //話したら13番をLOWに
  }
}
