#define trigPin 10
#define echoPin 13
#define redPin 6
#define orangePin 7
#define greenPin 8

float duration,distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(orangePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2)*0.0343;

  Serial.print("Distance = ");
  
  if (distance <= 5){
    Serial.println("Bahaya");
    digitalWrite(redPin,HIGH);
    digitalWrite(orangePin,LOW);
    digitalWrite(greenPin,LOW);
  }
  if(distance <= 10){
    Serial.println("Hati-Hati");
    digitalWrite(redPin,LOW);     
    digitalWrite(orangePin,HIGH);
    digitalWrite(greenPin,LOW);
  }
  if(distance <= 15){
    Serial.println("Aman");
    digitalWrite(redPin,LOW);     
    digitalWrite(orangePin,LOW);
    digitalWrite(greenPin,HIGH);
  }
  delayMicroseconds(50);
}
