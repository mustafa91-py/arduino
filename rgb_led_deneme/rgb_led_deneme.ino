const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

int r=0,g=0,b=0;

int _delay = 20;
void indivudal(){
    if (r < 255) {
    r++;
  }else{
    if (g < 255){
      g++;
    }else{
      if (b < 255){
        b++;
      }else{
            r = 0;
            g = 0;
            b = 0;
      }
    }
}}
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  indivudal();
  setColor(r, g, b); // Kırmızı
  delay(_delay);
  /*
  setColor(0, 255, 0); // Yeşil
  delay(_delay);
  setColor(0, 0, 255); // Mavi
  delay(_delay);
  setColor(255, 255, 0); // Sarı
  delay(_delay);
  setColor(80, 0, 80); // Mor
  delay(_delay);
  setColor(0, 255, 255); // Cyan
  delay(_delay);
  setColor(255, 255, 255); // Beyaz
  delay(_delay);*/
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
