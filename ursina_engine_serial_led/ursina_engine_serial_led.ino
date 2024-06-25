int redPin = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
}

void loop() {
  digitalWrite(redPin,HIGH);
  Serial.println(1);
  delay(1000);
  digitalWrite(redPin,LOW);
  Serial.println(0);
  delay(1000);
  // put your main code here, to run repeatedly:

}
