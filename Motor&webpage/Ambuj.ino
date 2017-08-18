#include <ESP8266WiFi.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(D0,D1,D2,D3,D4,D5);
const char* ssid = "Ali akber";
const char* password = "aliakberfaiz123";
int ledPin = D8;
int MP = D6;
int MN= D7;
int indexer=0;
WiFiServer server(80);
 
void setup() {
  Serial.begin(115200);
  delay(10);
  lcd.begin(16,2); 
 
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
 
  // Connect to WiFi network
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
  Serial.print("Use this URL to connect: ");
  Serial.print("http://");
  Serial.print(WiFi.localIP());
  Serial.println("/");
 
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
  String request = client.readStringUntil('\r');
  Serial.println(request);
  client.flush();
 
  // Match the request
 
  
  indexer=request.indexOf("lastname=");
 
  lcd.clear();
 
  if (request.substring(indexer+9,indexer+11)=="ON" )  {
    digitalWrite(ledPin, HIGH);
   
    lcd.print("led is on");
    while(1);
  }

  if (request.substring(indexer+9,indexer+12)=="Run")  {
    digitalWrite(MP, HIGH);
     digitalWrite(MN, LOW);
  
    lcd.print("Motor On");
    while(1);
  }
  
  
// Set ledPin according to the request
//digitalWrite(ledPin, value);
 
  // Return the response
  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html");
  client.println(""); //  do not forget this one
  client.println("<!DOCTYPE HTML>");
  client.println("<html>");
 
  client.print("you are going to see magic ");
 
 
  client.println("<br><br>");
  client.println("<a href=\"/LED=ON\"\">");
  client.println("<a href=\"/LED=OFF\"\"></a><br />");  
  client.println("<form action="+request+"\\>");
 client.println(" <input type=\"text\" name=\"lastname\" value=\"\">");
  client.println("<input type=\"submit\" value=\"Submit\">");
  
  client.println("</html>");
 
  delay(1);
  Serial.println("Client disonnected");
  Serial.println("");
 
}
