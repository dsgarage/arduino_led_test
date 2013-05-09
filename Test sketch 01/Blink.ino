int led = 13;

void setup() {                

  pinMode(led, OUTPUT);     //ピンモード設定
}

void loop() {
  digitalWrite(led, HIGH);   //LED ON
  delay(1000);               //1000ms待機
  digitalWrite(led, LOW);    //LED OFF
  delay(1000);               //1000ms待機
}
