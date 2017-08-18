const int rp = 4;
int p;
#include <ESP8266WiFi.h>

const char* ssid = "Ali akber";
const char* password = "aliakberfaiz";

// Create an instance of the server
// specify the port to listen on as an argument
WiFiServer server(80);

void setup() {
 Serial.begin(115200);
 delay(10);

 // prepare GPIO2
pinMode(rp, OUTPUT);
analogWrite(rp, 0);
Serial.println();
 Serial.println();
 Serial.print("Connecting to ");
 Serial.println(ssid);
 
 WiFi.begin(ssid, password);
 
 while (WiFi.status() != WL_CONNECTED) {
   delay(500);
   Serial.print(".");
 }
 Serial.println("");
 Serial.println("WiFi connected");
 
 // Start the server
 server.begin();
 Serial.println("Server started");

 // Print the IP address
 Serial.println(WiFi.localIP());
}
void loop() {
 // Check if a client has connected
 WiFiClient client = server.available();
 if (!client) {
   return;
 }
 
 // Wait until the client sends some data
 Serial.println("new client");
 while(!client.available()){
   delay(1);
 }
 
 // Read the first line of the request
 String req = client.readStringUntil('\r');
 Serial.println(req);
 client.flush();
while(client.available()>0)
{
char a=(client.read()-48)*100;
char b=(client.read()-48)*10;
char c=(client.read()-48);
}
p=(a+b+c);
setcolor(p);
   client.flush();
   String s = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n<!DOCTYPE HTML>\r\n<html>\r\nTHE PWM VALUE is  ";
   s += "</html>\n";
   client.print(P);
}
void setcolor(int r)
{
 analogWrite(rp,r);
}
