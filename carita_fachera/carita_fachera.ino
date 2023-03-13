#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // RS, E, D4, D5, D6, D7

byte customChar1[] = {B00000,B00000,B01010,B10101,B10001,B01010,B00100,B00000,}; 
byte customChar2[] = {B00000,B00000,B01010,B11111,B11111,B01110,B00100,B00000,};

void setup() {
  lcd.begin(16, 2);
  lcd.createChar(1, customChar1);
  lcd.createChar(2, customChar2);
  lcd.home();
  lcd.write(1);
  lcd.setCursor(1,0);
  lcd.write(2);
  lcd.setCursor(2,0);
  lcd.write(1);
  lcd.setCursor(3,0);
  lcd.write(2);
  lcd.setCursor(4,0);
  lcd.write(1);
  lcd.setCursor(5,0);
  lcd.write(2);
  lcd.setCursor(6,0);
  lcd.write(1);
  lcd.setCursor(7,0);
  lcd.write(2);
  lcd.setCursor(8,0);
  lcd.write(1);
  lcd.setCursor(9,0);
  lcd.write(2);
  lcd.setCursor(10,0);
  lcd.write(1);
  lcd.setCursor(11,0);
  lcd.write(2);
  lcd.setCursor(12,0);
  lcd.write(1);
  lcd.setCursor(13,0);
  lcd.write(2);
  lcd.setCursor(14,0);
  lcd.write(1);
  lcd.setCursor(15,0);
  lcd.write(2);
  lcd.setCursor(6,1);
  lcd.write("MAMA");
  lcd.scrollDisplayLeft();
  delay(500);
  lcd.scrollDisplayRight();
  delay(500);
  lcd.scrollDisplayLeft();
  delay(500);
  lcd.scrollDisplayRight();
  delay(500);
  lcd.scrollDisplayLeft();
  delay(500);
  lcd.scrollDisplayRight();
  delay(500);
}

void loop() { }