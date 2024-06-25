int redPin = 9;    // Kırmızı LED pin numarası
int greenPin = 10; // Yeşil LED pin numarası
int bluePin = 11;  // Mavi LED pin numarası

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.println("RGB LED kontrolüne hazır!");
}

void loop() {
  if (Serial.available() > 0) {
    // Bilgisayardan gelen veriyi oku
    String data = Serial.readStringUntil('\n');
    // Veriyi ',' ile ayır ve RGB değerlerine dönüştür
    int commaIndex1 = data.indexOf(',');
    int commaIndex2 = data.indexOf(',', commaIndex1 + 1);
    int redValue = data.substring(0, commaIndex1).toInt();
    int greenValue = data.substring(commaIndex1 + 1, commaIndex2).toInt();
    int blueValue = data.substring(commaIndex2 + 1).toInt();

    // RGB LED'i ayarla
    analogWrite(redPin, redValue);
    analogWrite(greenPin, greenValue);
    analogWrite(bluePin, blueValue);
  }
}
