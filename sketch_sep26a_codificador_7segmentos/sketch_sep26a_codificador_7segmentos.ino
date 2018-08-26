//Programa: CD4511 e Arduino

//Definicao dos pinos de entrada
#define PinoA0 4
#define PinoA1 5
#define PinoA2 6
#define PinoA3 7

void setup()
{
  Serial.begin(9600);
  //Define os pinos como saida
  pinMode(PinoA0, OUTPUT);
  pinMode(PinoA1, OUTPUT);
  pinMode(PinoA2, OUTPUT);
  pinMode(PinoA3, OUTPUT);
  //Mensagem inicial serial Monitor
  Serial.println("Teste de CD4511\n");
}

void loop()
{
  Serial.print("Numero: 0 ");
  digitalWrite(PinoA0, LOW);
  digitalWrite(PinoA1, LOW);
  digitalWrite(PinoA2, LOW);
  digitalWrite(PinoA3, LOW);
  delay(1000);

  Serial.print("1 ");
  digitalWrite(PinoA0, HIGH);
  digitalWrite(PinoA1, LOW);
  digitalWrite(PinoA2, LOW);
  digitalWrite(PinoA3, LOW);
  delay(1000);

  Serial.print("2 ");
  digitalWrite(PinoA0, LOW);
  digitalWrite(PinoA1, HIGH);
  digitalWrite(PinoA2, LOW);
  digitalWrite(PinoA3, LOW);
  delay(1000);

  Serial.print("3 ");
  digitalWrite(PinoA0, HIGH);
  digitalWrite(PinoA1, HIGH);
  digitalWrite(PinoA2, LOW);
  digitalWrite(PinoA3, LOW);
  delay(1000);

  Serial.print("4 ");
  digitalWrite(PinoA0, LOW);
  digitalWrite(PinoA1, LOW);
  digitalWrite(PinoA2, HIGH);
  digitalWrite(PinoA3, LOW);
  delay(1000);

  Serial.print("5 ");
  digitalWrite(PinoA0, HIGH);
  digitalWrite(PinoA1, LOW);
  digitalWrite(PinoA2, HIGH);
  digitalWrite(PinoA3, LOW);
  delay(1000);

  Serial.print("6 ");
  digitalWrite(PinoA0, LOW);
  digitalWrite(PinoA1, HIGH);
  digitalWrite(PinoA2, HIGH);
  digitalWrite(PinoA3, LOW);
  delay(1000);

  Serial.print("7 ");
  digitalWrite(PinoA0, HIGH);
  digitalWrite(PinoA1, HIGH);
  digitalWrite(PinoA2, HIGH);
  digitalWrite(PinoA3, LOW);
  delay(1000);

  Serial.print("8 ");
  digitalWrite(PinoA0, LOW);
  digitalWrite(PinoA1, LOW);
  digitalWrite(PinoA2, LOW);
  digitalWrite(PinoA3, HIGH);
  delay(1000);

  Serial.println("9 ");
  digitalWrite(PinoA0, HIGH);
  digitalWrite(PinoA1, LOW);
  digitalWrite(PinoA2, LOW);
  digitalWrite(PinoA3, HIGH);
  delay(1000);

  Serial.println("Limpa o display...");
  digitalWrite(PinoA0, HIGH);
  digitalWrite(PinoA1, HIGH);
  digitalWrite(PinoA2, HIGH);
  digitalWrite(PinoA3, HIGH);
  delay(1000);
}
