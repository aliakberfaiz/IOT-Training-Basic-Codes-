void setup() {
pinMode(D0,OUTPUT);
pinMode(D1,OUTPUT);
}

void clockwise()
{
  digitalWrite(D0,HIGH);
  digitalWrite(D0,LOW);
  
}
void aclockwise()
{
  digitalWrite(D0,LOW);
  digitalWrite(D0,HIGH);
 
}
void halt()
{
  digitalWrite(D0,LOW);
  digitalWrite(D0,LOW);
  
}

void loop() {
clockwise();
delay(2000);
aclockwise();
delay(2000);
halt();
delay(2000);
}
