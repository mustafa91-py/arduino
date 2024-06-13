#define kirmizi_led 8
#define _delay 25
void setup() {
  // put your setup code here, to run once:
   
  pinMode(kirmizi_led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(kirmizi_led,HIGH);
  delay(_delay);
  digitalWrite(kirmizi_led,LOW);
  delay(_delay);
}
