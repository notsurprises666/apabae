#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
int i;
lcd.setCursor(0,0);
lcd.print("HAI BLOG !!!");
for(i = 0; i < 16; i++)
lcd.scrollDisplayRight();
delay(500);
}
