void setup() {
  pinMode(A0, INPUT); // PWM çıkışı olarak ayarla
  // Pin 9 ve 10 için PWM frekansını 31.25 kHz olarak ayarla
  TCCR1B = TCCR1B & 0b11111000 | 0x01;
  //pin 5 64 khz
  //TCCR0A = _BV(COM0B1) | _BV(WGM00) | _BV(WGM01);
  //TCCR0B = _BV(CS00);
  Serial.begin(9600);
}
int x = 50;
void loop() {
  // Fanı çalıştırmak için başlangıçta yüksek duty cycle uygulayın
  //analogWrite(9, 254); // %100 duty cycle
  //delay(1000); // 1 saniye bekle
  if (x>= 255){
    x = 50;
 // analogWrite(9, x); // 255 * 0.25 = 64
  delay(5000);
  }
  x++;
  Serial.println(analogRead(A0));
  // Fan hızını düşük hızda çalıştır (duty cycle %25)
 // analogWrite(9, x); // 255 * 0.25 = 64
  delay(100); // 5 saniye bekle
  
  // Fan hızını orta hızda çalıştır (duty cycle %50)
  //analogWrite(9, 128); // 255 * 0.50 = 128
  //delay(5000); // 5 saniye bekle
  
  // Fan hızını yüksek hızda çalıştır (duty cycle %75)
  //analogWrite(9, 192); // 255 * 0.75 = 192
  //delay(5000); // 5 saniye bekle
  
  // Fanı kapat (duty cycle %0)
  //analogWrite(9, 0); // 255 * 0 = 0
  //delay(5000); // 5 saniye bekle
}
