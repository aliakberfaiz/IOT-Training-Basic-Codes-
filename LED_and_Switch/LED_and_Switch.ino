const int button1 = D0;
const int button2 = D1;
const int led1 = D2;
const int led2 = D3;
int buttonState1 = 0;
int buttonState2 = 0;
void setup() {
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop() {
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);
  if(buttonState1==HIGH&&buttonState2==LOW)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
     
  }
  else if(buttonState1==LOW&&buttonState2==HIGH)
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
     
  }
  else if(buttonState1==HIGH&&buttonState2==HIGH)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
     
  }
  else
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
     
  }

}
