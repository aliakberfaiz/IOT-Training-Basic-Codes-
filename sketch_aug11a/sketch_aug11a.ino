void setup() {
pinMode(D0,OUTPUT);
pinMode(D1,OUTPUT);
pinMode(D2,OUTPUT);
pinMode(D3,OUTPUT);
pinMode(D4,OUTPUT);
pinMode(D5,OUTPUT);
pinMode(D6,OUTPUT);
pinMode(D7,OUTPUT);
pinMode(D8,OUTPUT);
}

void blink(int n){
  for (int i=0;i<n;i++){
  digitalWrite(D8,HIGH);
  delay(250);
  digitalWrite(D8,LOW);
  delay(250);
  }
}
void loop() {
zero();delay(1000);
one();delay(1000);
two();delay(1000);
three();delay(1000);
four();delay(1000);
five();delay(1000);
six();delay(1000);
seven();delay(1000);
eight();delay(1000);
nine();delay(1000);
}
void eight(){
digitalWrite(D0,HIGH);
digitalWrite(D1,HIGH);
digitalWrite(D2,HIGH);
digitalWrite(D3,HIGH);
digitalWrite(D4,HIGH);
digitalWrite(D5,HIGH);
digitalWrite(D6,HIGH);
digitalWrite(D7,HIGH);
blink(8);}

void one(){
digitalWrite(D0,LOW);
digitalWrite(D1,HIGH);
digitalWrite(D2,HIGH);
digitalWrite(D3,LOW);
digitalWrite(D4,LOW);
digitalWrite(D5,LOW);
digitalWrite(D6,LOW);
digitalWrite(D7,LOW);
blink(1);}

void two(){
digitalWrite(D0,HIGH);
digitalWrite(D1,HIGH);
digitalWrite(D2,LOW);
digitalWrite(D3,HIGH);
digitalWrite(D4,HIGH);
digitalWrite(D5,LOW);
digitalWrite(D6,HIGH);
digitalWrite(D7,HIGH);
blink(2);}

void three(){
digitalWrite(D0,HIGH);
digitalWrite(D1,HIGH);
digitalWrite(D2,HIGH);
digitalWrite(D3,HIGH);
digitalWrite(D4,LOW);
digitalWrite(D5,LOW);
digitalWrite(D6,HIGH);
digitalWrite(D7,HIGH);
blink(3);}

void four(){
digitalWrite(D0,LOW);
digitalWrite(D1,HIGH);
digitalWrite(D2,HIGH);
digitalWrite(D3,LOW);
digitalWrite(D4,LOW);
digitalWrite(D5,HIGH);
digitalWrite(D6,HIGH);
digitalWrite(D7,HIGH);
blink(4);}

void five(){
digitalWrite(D0,HIGH);
digitalWrite(D1,LOW);
digitalWrite(D2,HIGH);
digitalWrite(D3,HIGH);
digitalWrite(D4,LOW);
digitalWrite(D5,HIGH);
digitalWrite(D6,HIGH);
digitalWrite(D7,HIGH);
blink(5);}

void six(){
digitalWrite(D0,HIGH);
digitalWrite(D1,LOW);
digitalWrite(D2,HIGH);
digitalWrite(D3,HIGH);
digitalWrite(D4,HIGH);
digitalWrite(D5,HIGH);
digitalWrite(D6,HIGH);
digitalWrite(D7,HIGH);
blink(6);}

void seven(){
digitalWrite(D0,HIGH);
digitalWrite(D1,HIGH);
digitalWrite(D2,HIGH);
digitalWrite(D3,LOW);
digitalWrite(D4,LOW);
digitalWrite(D5,LOW);
digitalWrite(D6,LOW);
digitalWrite(D7,HIGH);
blink(7);}

void nine(){
digitalWrite(D0,HIGH);
digitalWrite(D1,HIGH);
digitalWrite(D2,HIGH);
digitalWrite(D3,HIGH);
digitalWrite(D4,LOW);
digitalWrite(D5,HIGH);
digitalWrite(D6,HIGH);
digitalWrite(D7,LOW);
blink(9);}

void zero(){
digitalWrite(D0,HIGH);
digitalWrite(D1,HIGH);
digitalWrite(D2,HIGH);
digitalWrite(D3,HIGH);
digitalWrite(D4,HIGH);
digitalWrite(D5,HIGH);
digitalWrite(D6,LOW);
digitalWrite(D7,LOW);
}

