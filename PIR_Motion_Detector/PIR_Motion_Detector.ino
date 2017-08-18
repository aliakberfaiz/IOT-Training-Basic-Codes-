const int light = D6;

const int pir = D7;
int pirState = 0;
void setup() {

 pinMode(light,OUTPUT);
 pinMode(pir,INPUT); 
}

void loop() {
  pirState = digitalRead(pir);
  if(pirState == LOW)
  {
   
    digitalWrite(light,HIGH);
    
    
  }
  else
  {
 digitalWrite(light,LOW);
}
}
