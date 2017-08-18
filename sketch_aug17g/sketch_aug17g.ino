/*************************************************************
  Download latest Blynk library here:
    https://github.com/blynkkk/blynk-library/releases/latest

  Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Sketch generator:           http://examples.blynk.cc
    Blynk community:            http://community.blynk.cc
    Social networks:            http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  This example runs directly on ESP8266 chip.

  Note: This requires ESP8266 support package:
    https://github.com/esp8266/Arduino

  Please be sure to select the right ESP8266 module
  in the Tools -> Board menu!

  Change WiFi ssid, pass, and Blynk auth token to run :)
  Feel free to apply it to any other example. It's simple!
 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
const int a =D0;
const int b =D1;
const int c =D2;
const int d =D3;
const int e =D4;
const int f =D5;
const int g =D6;
const int l1 = D7;
const int l2 = D8;
const int l3 = D9;
int buttonPin=0;

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "937742cd741c4c42b71aa938bed62533";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Ali akber";
char pass[] = "aliakberfaiz123";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
pinMode(l1,OUTPUT);
pinMode(l2,OUTPUT);
pinMode(l3,INPUT);
}

void loop()
{
  Blynk.run();
  buttonPin=digitalRead(l3);
  if(buttonPin==HIGH)
  {
   traffic(); 
   }
   else
   displayOff();
}
void traffic(){
  digitalWrite(l1,HIGH);
  
 cd();
  digitalWrite(l1,LOW);
}
void cd(){ nine();
  eight();
  seven();
  six();
  five();
  four();
  three();
  two();
  one();
  zero();}
void zero(){ digitalWrite(a,HIGH);
             digitalWrite(b,HIGH);
             digitalWrite(c,HIGH);
             digitalWrite(d,HIGH);
             digitalWrite(e,HIGH);
             digitalWrite(f,HIGH);
             digitalWrite(g,LOW);
             delay(500);}
void one(){digitalWrite(a,LOW);
             digitalWrite(b,HIGH);
             digitalWrite(c,HIGH);
             digitalWrite(d,LOW);
             digitalWrite(e,LOW);
             digitalWrite(f,LOW);
             digitalWrite(g,LOW); delay(500);}
void two(){digitalWrite(a,HIGH);
             digitalWrite(b,HIGH);
             digitalWrite(c,LOW);
             digitalWrite(d,HIGH);
             digitalWrite(e,HIGH);
             digitalWrite(f,LOW);
             digitalWrite(g,HIGH); delay(500);}
void three(){digitalWrite(a,HIGH);
             digitalWrite(b,HIGH);
             digitalWrite(c,HIGH);
             digitalWrite(d,HIGH);
             digitalWrite(e,LOW);
             digitalWrite(f,LOW);
             digitalWrite(g,HIGH); delay(500);}
void four(){digitalWrite(a,LOW);
             digitalWrite(b,HIGH);
             digitalWrite(c,HIGH);
             digitalWrite(d,LOW);
             digitalWrite(e,LOW);
             digitalWrite(f,HIGH);
             digitalWrite(g,HIGH); delay(500);}
void five(){digitalWrite(a,HIGH);
             digitalWrite(b,LOW);
             digitalWrite(c,HIGH);
             digitalWrite(d,HIGH);
             digitalWrite(e,LOW);
             digitalWrite(f,HIGH);
             digitalWrite(g,HIGH); delay(500);}
void six(){digitalWrite(a,HIGH);
             digitalWrite(b,LOW);
             digitalWrite(c,HIGH);
             digitalWrite(d,HIGH);
             digitalWrite(e,HIGH);
             digitalWrite(f,HIGH);
             digitalWrite(g,HIGH); delay(500);}
void seven(){digitalWrite(a,HIGH);
             digitalWrite(b,HIGH);
             digitalWrite(c,HIGH);
             digitalWrite(d,LOW);
             digitalWrite(e,LOW);
             digitalWrite(f,LOW);
             digitalWrite(g,LOW); delay(500);}
void eight(){digitalWrite(a,HIGH);
             digitalWrite(b,HIGH);
             digitalWrite(c,HIGH);
             digitalWrite(d,HIGH);
             digitalWrite(e,HIGH);
             digitalWrite(f,HIGH);
             digitalWrite(g,HIGH); delay(500);}
void nine(){digitalWrite(a,HIGH);
             digitalWrite(b,HIGH);
             digitalWrite(c,HIGH);
             digitalWrite(d,HIGH);
             digitalWrite(e,LOW);
             digitalWrite(f,HIGH);
             digitalWrite(g,HIGH); delay(500);}
void displayOff(){
   digitalWrite(a,LOW);
             digitalWrite(b,LOW);
             digitalWrite(c,LOW);
             digitalWrite(d,LOW);
             digitalWrite(e,LOW);
             digitalWrite(f,LOW);
             digitalWrite(g,LOW);
             digitalWrite(l1,LOW);
             digitalWrite(l2,LOW);
             //digitalWrite(l3,LOW);
             delay(500);
  
  }
