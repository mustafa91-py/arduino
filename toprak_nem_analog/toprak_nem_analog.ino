int sensorPin = 9;
int buzzerPin = 8;
int analogPin = A1;
int veri;
int analogVeri;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPin,INPUT);
  pinMode(buzzerPin,OUTPUT);
  pinMode(analogPin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  veri = digitalRead(sensorPin);
  analogVeri = analogRead(analogPin);
  Serial.println(analogVeri);
  //Serial.println(veri);
  if(veri == true){
    digitalWrite(buzzerPin,HIGH);
    delay(100);
    digitalWrite(buzzerPin,LOW);
    delay(100);
  }else{
    digitalWrite(buzzerPin,LOW);
  }
  delay(50);

}
