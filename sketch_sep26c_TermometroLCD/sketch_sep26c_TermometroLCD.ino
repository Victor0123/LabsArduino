#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int LM35 = 0;
int temperatura = 0;
int ADClido = 0;
const int Buzzer = 7;
const int R = 8;
const int G = 9;
const int B = 10;

void setup() {
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  lcd.begin(16, 2);
  analogReference(INTERNAL);
  
}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  ADClido = analogRead(LM35);
  temperatura = ADClido * 0.1075268817204301;
  if(temperatura < 20){
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
  }
  if(temperatura >= 20 and temperatura < 30){
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
  }
  if(temperatura >= 30){
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
    tone(Buzzer, 2000);
  }
 
  else{
    noTone(Buzzer);
  }
  lcd.print(temperatura);
  delay(500);

}
