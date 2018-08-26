#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int LM35 = 0;
int temperatura = 0;
int ADClido = 0;
const int Buzzer = 7;
const int R = 8;
const int G = 9;
const int B = 10;
const int Botao = 6;
int EstadoBotao = 0;
int TempMax = 30;

void setup() {
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(Botao, INPUT);
  lcd.begin(16, 2);
  analogReference(INTERNAL);
  
}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  ADClido = analogRead(LM35);
  temperatura = ADClido * 0.1075268817204301;
  EstadoBotao = digitalRead(Botao);
 

  
  if(EstadoBotao == HIGH){
     TempMax = TempMax + 1;
     lcd.setCursor(13,1);
     lcd.print(TempMax);
     lcd.setCursor(0,2);
     lcd.print("Temp. Max.");
     delay(100);
        
  }
  
  
  if(TempMax > 100){
    TempMax = 30;
    lcd.setCursor(9,1);
    lcd.print(TempMax);
    delay(5000);
  }
  if(temperatura < 20){
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
  }
  if(temperatura >= 20 and temperatura < TempMax){
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
  }
  if(temperatura >= TempMax){
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
    tone(Buzzer, 2000);
  }
 
  else{
    noTone(Buzzer);
  }
  
  lcd.print(temperatura);
  lcd.setCursor(2,0);
  lcd.print("C*");
  delay(100);

}
