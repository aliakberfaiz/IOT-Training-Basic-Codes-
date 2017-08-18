const int button = D6;
const int MP = D0;
const int MN = D1;
//const int buzzer = D3;
int buttonState = 0;

void setup() {
  pinMode(button,INPUT);
  pinMode(MP,OUTPUT);
  pinMode(MN,OUTPUT);
  //pinMode(buzzer,OUTPUT);
}
void loop() {
buttonState = digitalRead(button);
if(buttonState==HIGH)
{
  digitalWrite(MP,HIGH);
  digitalWrite(MN,LOW);
 // digitalWrite(buzzer,HIGH);
}
else
{
  digitalWrite(MP,LOW);
  digitalWrite(MN,LOW);
  //digitalWrite(buzzer,LOW);
}

}
