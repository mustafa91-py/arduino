// Motor kontrol pinleri
const int motorPin1 = 9; // L293D Input 1
const int motorPin2 = 8; // L293D Input 2

void setup() {
  // Motor pinlerini çıkış olarak ayarla
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void loop() {
  // Motoru ileri çalıştır
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  delay(2000); // 2 saniye ileri dön

  // Motoru durdur
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  delay(50); // 1 saniye dur

  // Motoru geri çalıştır
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  delay(2000); // 2 saniye geri dön

  // Motoru durdur
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  delay(50); // 1 saniye dur
}
