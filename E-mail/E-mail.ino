#define BLYNK_PRINT Serial
//#define BLYNK_MAX_SENDBYTES 128

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "937742cd741c4c42b71aa938bed62533";

char ssid[] = "sshhhh";
char pass[] = "w.x.y.z.1";

void emailOnButtonPress()
{


  int isButtonPressed = !digitalRead(D2); // Invert state, since button is "Active LOW"

  if (isButtonPressed) // You can write any condition to trigger e-mail sending
  {
    Serial.println("Button is pressed."); // This can be seen in the Serial Monitor
    Blynk.email("ninaadshukla@gmail.com", "Subject: Button Logger", "You just pushed the button...");

  }
}

void setup()
{
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);

  Blynk.email("ninaadshukla@gmail.com", "Subject", "My Blynk project is online.");

  pinMode(D2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(D2), emailOnButtonPress, CHANGE);
}

void loop()
{
  Blynk.run();
}

