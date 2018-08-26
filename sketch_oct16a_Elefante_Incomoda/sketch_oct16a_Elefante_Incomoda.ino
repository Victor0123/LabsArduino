void setup() {
  Serial.begin(9600);
  while (!Serial){
    ;
  }
}

void loop() {
  Serial.println("Um elefante incomoda muita gente");
  delay(1000); // aguarda um segundo
 
  int quantos; // quantos elefantes
  int vezes; // número de "incomodam"
 
  for (quantos = 2; quantos < 100; quantos = quantos + 1) { // início do "for"
    Serial.print(quantos); // escreve a quantidade
    Serial.print(" elefantes");
 
    for (vezes = 0; vezes < quantos; vezes = vezes + 1) { // início do "for"
      Serial.print(" incomodam");
      delay(500);
    } // fim do "for" de vezes
 
    Serial.println(" muito mais!");
    delay(1000);
  } // fim do "for" de quantos
 
} // fim do "loop"
