
const int moistSensor=D0;
const int ledPin=D1;
int moistState=0;


void setup() {
pinMode(moistSensor,INPUT);
pinMode(ledPin,OUTPUT);

}

void loop() {
moistState = digitalRead(moistSensor);
while(moistState==HIGH){
  digitalWrite(ledPin,HIGH);
  moistState=digitalRead(moistSensor);
  }
  digitalWrite(ledPin,LOW);
}
