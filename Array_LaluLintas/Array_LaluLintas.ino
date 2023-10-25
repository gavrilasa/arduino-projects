int num_array[4] [6]={
 {1,0,0,0,0,1},
 {0,1,0,0,0,1},
 {0,0,1,1,0,0},
 {0,0,1,0,1,0}
};
 
int ledPins[]={2,3,4,5,6,7,8};
int i;
int j;

void setup() {
  for(int i=0;i<6;i++){
    pinMode(ledPins[i],OUTPUT);}}
    
void  Num_Write(int i){
  int pin = 2;
  for (int j = 0; j < 6; ++j) {
    digitalWrite(pin,num_array[i][j]);
    ++pin;}}  
    
void loop() {
for(int i=0;i<1;i++){
   Num_Write(i);
  delay(6000);}
 for(int i=1;i<2;i++){
  Num_Write(i);
  delay(1000);}
  for(int i=2;i<3;i++){
   Num_Write(i);
  delay(6000);}
  for(int i=3;i<4;i++){
  Num_Write(i);
  delay(1000);}
}


