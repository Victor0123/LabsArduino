int ValorSensor = 0;
    int nota = 0;
    const int Buzzer = 5;
    
    void setup(){
    }
    
    void loop(){
      ValorSensor = analogRead(A0);
      nota = map(ValorSensor, 1023, 0, 1000, 6000);
      tone(Buzzer, nota, 20);
      delay(10);
    }
