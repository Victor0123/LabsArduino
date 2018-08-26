#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int col1 = 0;
int col2 = 15;

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  col1++;
  col2--;
  lcd.clear();
  lcd.setCursor(col1,0);
  lcd.print("Lonely");
  lcd.setCursor(col2,1);
  lcd.print("Coracao");
  delay(500);


  if(col1 == 16)
    col1 = 0;
  if(col2 == 0)
    col2 = 15;
}
