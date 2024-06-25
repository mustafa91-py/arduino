// Motor kontrol pinleri
const int enablePin = 3; // L293D Enable 1-2 (PWM pin)
const int motorPin1 = 9; // L293D Input 1
const int motorPin2 = 8; // L293D Input 2

void setup() {
  // Motor pinlerini çıkış olarak ayarla
  pinMode(enablePin, OUTPUT);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
}

void loop() {
  // Motoru ileri çalıştır
  analogWrite(enablePin, 128); // PWM değeri (0-255), 128 orta hız
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  delay(2000); // 2 saniye ileri dön

  // Motoru durdur
  analogWrite(enablePin, 0); // PWM değeri 0, motor durur
  delay(1000); // 1 saniye dur

  // Motoru geri çalıştır
  analogWrite(enablePin, 128); // PWM değeri (0-255), 200 yüksek hız
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  delay(2000); // 2 saniye geri dön

  // Motoru durdur
  analogWrite(enablePin, 0); // PWM değeri 0, motor durur
  delay(1000); // 1 saniye dur
}
