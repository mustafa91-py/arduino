#define Buton 8
#define Led 10

int buton_durumu = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(Buton,INPUT);
  pinMode(Led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  buton_durumu = digitalRead(Buton);
  if (buton_durumu == 1){
    digitalWrite(Led,HIGH);
  }else{
    digitalWrite(Led,LOW);
  }
}
