const int pinPot = A0;
const int pinLED = 9;

void setup() {
  pinMode(pinPot,INPUT);
  pinMode(pinLED,OUTPUT);
}

long lastTime = 0;
int sensor = 0;
int ledValue;

void loop() {
  sensor = analogRead(pinPot);
  if(millis() > lastTime + sensor){
    if(ledValue == LOW){
      ledValue = HIGH;
    }else{
      ledValue = LOW;
    }
    lastTime = millis();
    digitalWrite(pinLED,ledValue);
  }
}
