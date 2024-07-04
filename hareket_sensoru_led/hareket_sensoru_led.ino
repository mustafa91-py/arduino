// PIR sensörünün bağlı olduğu pin
int pirPin = 2;
// LED'in bağlı olduğu pin (isteğe bağlı)
int ledPin = 8;
// PIR sensöründen gelen okuma değeri
int pirValue = 0;

void setup() {
  // PIR sensör pinini giriş olarak ayarla
  pinMode(pirPin, INPUT);
  // LED pinini çıkış olarak ayarla (isteğe bağlı)
  pinMode(ledPin, OUTPUT);
  // Seri iletişimi başlat
  Serial.begin(9600);
}

void loop() {
  // PIR sensöründen gelen değeri oku
  pirValue = digitalRead(pirPin);
  // Seri monitörde değeri yazdır
  Serial.println(pirValue);

  // Hareket algılandığında (pirValue == HIGH)
  if (pirValue == HIGH) {
    // LED'i yak (isteğe bağlı)
    digitalWrite(ledPin, HIGH);
    // İlgili işlemi yap
    //Serial.println("Hareket algılandı!");
  } else {
    // LED'i söndür (isteğe bağlı)
    digitalWrite(ledPin, LOW);
  }

  // Kısa bir süre bekle
  delay(1000);
}
