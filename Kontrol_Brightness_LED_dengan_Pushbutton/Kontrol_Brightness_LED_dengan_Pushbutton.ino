const int pinBt1 = 2;
const int pinBt2 = 3;
const int pinLED = 9;

void setup() {
  pinMode(pinBt1,INPUT);
  pinMode(pinBt2,INPUT);
  pinMode(pinLED,OUTPUT);
  digitalWrite(pinBt1,HIGH);
  digitalWrite(pinBt2,HIGH);
}

int brightness = 0;

void loop() {
  if(digitalRead(pinBt1) == LOW) {
    brightness++;  
  }
    else if (digitalRead(pinBt2) == LOW){
      brightness--;
    }

  brightness = constrain(brightness, 0, 255);
  analogWrite(pinLED, brightness);
  delay(20);
}
