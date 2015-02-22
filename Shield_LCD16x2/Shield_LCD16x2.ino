
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.blink();
  lcd.print("I love my Baby!"); 
  delay (2000);
  lcd.setCursor(0, 1);
  lcd.print("...and Theo! :)"); 
  delay(2000);
  lcd.clear();
  delay(4000);
}
