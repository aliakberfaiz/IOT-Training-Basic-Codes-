#define BLYNK_PRINT Serial
#include<LiquidCrystal.h>


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
LiquidCrystal lcd(D0,D1,D4,D5,D6,D7);

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "937742cd741c4c42b71aa938bed62533";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Ali akber";
char pass[] = "alialiali";
const int buttonInput=D2;
int statusIn=0;
int sensorValue=0;
int sensorPin = A0;
void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  lcd.begin(16,2); 
  pinMode(buttonInput,INPUT);
  pinMode(D8,OUTPUT);
}

void loop()
{
  Blynk.run();
  //atusIn=digitalRead(buttonInput);st
   sensorValue = analogRead(sensorPin);
 
    printHello();
    if(sensorValue>500&&sensorValue<800){digitalWrite(D8,HIGH);lcd.clear();lcd.print("be careful");delay(1000);}
    else{digitalWrite(D8,LOW);}

    if(sensorValue>800){digitalWrite(D8,HIGH);lcd.clear();lcd.print("Dangerous");delay(1000);}
    else{digitalWrite(D8,LOW);}
    
   
  }
 void printHello(){
  lcd.clear();
  lcd.print(sensorValue);
  delay(1000);
  }
