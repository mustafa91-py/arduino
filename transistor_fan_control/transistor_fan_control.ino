void setup() {
  //pinMode(A0, INPUT); // sari kablo devir icic
  pinMode(9, OUTPUT); // PWM çıkışı olarak ayarla
  // Pin 9 ve 10 için PWM frekansını 31.25 kHz olarak ayarla
  TCCR1B = TCCR1B & 0b11111000 | 0x01;
  //pin 5 64 khz
  //TCCR0A = _BV(COM0B1) | _BV(WGM00) | _BV(WGM01);
  //TCCR0B = _BV(CS00);
  Serial.begin(9600);
  analogWrite(9, 255); // %100 duty cycle
  Serial.println("ilk");
  delay(8000); //
}
int x = 50;
int r = 0, g = 0, b = 0;
void loop() {
  // Fanı çalıştırmak için başlangıçta yüksek duty cycle uygulayın 1 saniye bekle

  // Fan hızını düşük hızda çalıştır (duty cycle %25)
  analogWrite(9, 95); // 255 * 0.25 = 64
  Serial.println("low");
  delay(5000); // 5 saniye bekle
  //Serial.println(analogRead(A0));
   //Fan hızını orta hızda çalıştır (duty cycle %50)
  analogWrite(9, 140); // 255 * 0.50 = 128
  Serial.println("orta");
  delay(5000); // 5 saniye bekle
  //Serial.println(analogRead(A0));
   //Fan hızını yüksek hızda çalıştır (duty cycle %75)
  analogWrite(9, 200); // 255 * 0.75 = 192
  Serial.println("yuksek");
  delay(5000); // 5 saniye bekle
  // % 100
  //Serial.println(analogRead(A0));
  analogWrite(9, 255); // 255 * 0.75 = 192
  Serial.println("full");
  delay(5000); // 5 saniye bekle
   //Fanı kapat (duty cycle %0)
  analogWrite(9, 0); // 255 * 0 = 0
  Serial.println("kapali");
  //Serial.println(analogRead(A0));
  delay(5000); // 5 saniye bekle
}
