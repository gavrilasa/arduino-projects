const int led1 = 3;
const int led2 = 4;
const int led3 = 5;
const int led4 = 6;
const int led5 = 7;
const int led6 = 8;

int timeDelay = 200;

void setup() {
  for(int i=2;i<9;i++){
  pinMode(i, OUTPUT);
 }
}

void loop() {
  for(int i=2;i<11;i++){
    digitalWrite(i, LOW);}
    delay(timeDelay);
  for(int i=2;i<9;i++){
      if(timeDelay < 9){
      }
    digitalWrite(i, HIGH);
    delay(200);}
  for(int i=9;i>2;i--){
      if(timeDelay > 2){
      }
    digitalWrite(i, LOW);
    delay(200);}

  for(int i=0;i<9;i++){
      if(i==1){
        digitalWrite(3, HIGH);
        delay(50);}
        else{
          digitalWrite(3, LOW);
          delay(50);}
      if(i==2){
        digitalWrite(4, HIGH);
        delay(50);}
        else{
          digitalWrite(4, LOW);
          delay(50);}
      if(i==3){
        digitalWrite(5, HIGH);
        delay(50);}
        else{
          digitalWrite(5, LOW);
          delay(50);}
      if(i==4){
        digitalWrite(6, HIGH);
        delay(50);}
        else{
          digitalWrite(6, LOW);
          delay(50);}
      if(i==5){
        digitalWrite(7, HIGH);
        delay(50);}
        else{
          digitalWrite(7, LOW);
          delay(50);}
      if(i==6){
        digitalWrite(8, HIGH);
        delay(50);}
        else{
          digitalWrite(8, LOW);
          delay(50);}
  }
    for(int i=2;i<11;i++){
      digitalWrite(i, LOW);}
      delay(timeDelay);

      for(int i=2;i<9;i++){
        if(timeDelay < 9){  
        }
        digitalWrite(i, HIGH);
        delay(timeDelay);
        }
        
      for(int i=11;i>2;i--) {
        digitalWrite(i, LOW);
        delay(timeDelay);
        
      for(int i=9;i>2;i--) {
        if(timeDelay > 2){
        }
        digitalWrite(i, HIGH);
        delay(timeDelay);
      }
  }
}

