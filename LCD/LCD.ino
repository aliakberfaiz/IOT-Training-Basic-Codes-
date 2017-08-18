#include<LiquidCrystal.h>
LiquidCrystal lcd(D0,D1,D4,D5,D6,D7);
void setup() {
lcd.begin(16,2); 

}

void loop() {
lcd.print("Hello World");
while(1); 

}
