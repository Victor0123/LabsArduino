#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int col = 0;
int lin = 0;
int i = 0;
void setup() {
  lcd.begin(16, 2);
}

//void loop() {
//  // Turn off the cursor:
//  lcd.noCursor();
//  delay(500);
//  // Turn on the cursor:
//  lcd.cursor();
//  delay(500);
//}

void loop() {
  lcd.print("Yes science...");
  // scroll 13 positions (string length) to the left
  // to move it offscreen left:
  for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(150);
  }

  // scroll 29 positions (string length + display length) to the right
  // to move it offscreen right:
  for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(150);
  }

  // scroll 16 positions (display length + string length) to the left
  // to move it back to center:
  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(150);
  }

  // delay at the end of the full loop:
  delay(1000);

}


//void loop() {
//  // Turn off the blinking cursor:
//  lcd.noBlink();
//  delay(3000);
//  // Turn on the blinking cursor:
//  lcd.blink();
//  delay(3000);
//}

//void loop() {
//  // set the cursor to (0,0):
//  lcd.setCursor(0, 0);
////  // print from 0 to 9:
////  for (int thisChar = 0; thisChar < 10; thisChar++) {
////    lcd.print(thisChar);
////    delay(500);
////  }
//
//  // set the cursor to (16,1):
//  lcd.setCursor(16, 1);
//  // set the display to automatically scroll:
//  lcd.autoscroll();
//  // print from 0 to 9:
//  for (int thisChar = 0; thisChar < 25; thisChar++) {
//    lcd.print(thisChar);
//    delay(500);
//  }
//  // turn off automatic scrolling
//  lcd.noAutoscroll();
//
//  // clear screen for the next loop:
//  lcd.clear();
//}
