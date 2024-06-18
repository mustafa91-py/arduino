void setup() {
  Serial.begin(9600); // 
  pinMode(7, OUTPUT); // 
  digitalWrite(7, HIGH); // 
}

void loop() {
  if (Serial.available() > 0) { // Seri portta veri varsa
    char command = Serial.read(); // Gelen veriyi oku
    if (command == '1') { // Komut '1' ise
      digitalWrite(7, LOW); // Röleyi aç
    } else if (command == '0') { // Komut '0' ise
      digitalWrite(7, HIGH); // Röleyi kapat
    }
  }
}
