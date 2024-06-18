# define led 3
# define pot A0


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int deger = analogRead(pot);
  deger = map(deger,0,1023,0,255);
  // deger = deger /4 ;
  analogWrite(led,deger);
}
