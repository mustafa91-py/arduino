// Motor kontrol pinleri
const int enablePin = 3; // L293D Enable 1-2 (PWM pin)
const int motorPin1 = 9; // L293D Input 1
const int motorPin2 = 8; // L293D Input 2

int motorSpeed = 0; // Motor hızı (0-255 arası)

void setup() {
  // Seri haberleşmeyi başlat
  Serial.begin(9600);

  // Motor pinlerini çıkış olarak ayarla
  pinMode(enablePin, OUTPUT);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);

  // Motoru durdur
  analogWrite(enablePin, 0);
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);

  // Kullanıcıya bilgi ver
  Serial.println("Motor hızı kontrolu. Hız değeri (0-255) girin:");
}

void loop() {
  // Seri port üzerinden veri gelip gelmediğini kontrol et
  if (Serial.available() > 0) {
    // Seri porttan gelen veriyi oku
    motorSpeed = Serial.parseInt();

    // Hız değerinin 0-255 aralığında olup olmadığını kontrol et
    if (motorSpeed >= 0 && motorSpeed <= 255) {
      // Hız değerini ayarla
      analogWrite(enablePin, motorSpeed);

      // Motorun yönünü belirle (ileri yönde)
      digitalWrite(motorPin1, HIGH);
      digitalWrite(motorPin2, LOW);

      // Kullanıcıya bilgi ver
      Serial.print("Motor hızı ayarlandı: ");
      Serial.println(motorSpeed);
    } else {
      // Hatalı hız değeri girildi
      Serial.println("Hata: Hız değeri 0-255 aralığında olmalıdır.");
    }
  }
}


