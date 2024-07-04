int lastValue = 0; // En son alınan değeri saklamak için değişken

void setup() {
  pinMode(9, OUTPUT); // PWM çıkışı olarak ayarla
  // Pin 9 ve 10 için PWM frekansını 31.25 kHz olarak ayarla
  TCCR1B = TCCR1B & 0b11111000 | 0x01;
  Serial.begin(9600);
  Serial.println("Fan kontrolu basladi");
}

void loop() {
  if (Serial.available() > 1) {
    // Raspberry Pi'den gelen veriyi oku
    lastValue = Serial.parseInt(); // En son gelen değeri kaydet
    analogWrite(9, lastValue);
  // Gelen değeri ve fan hızını seri monitörde göster
    Serial.print("Gelen deger: ");
    Serial.println(lastValue);
    Serial.print("PWM degeri: ");
    Serial.println(lastValue);
  }

  // PWM değerini ayarla


  delay(100); // Biraz bekle, böylece döngü çok hızlı çalışmaz
}
