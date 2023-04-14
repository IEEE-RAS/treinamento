// Preparação do Arduino, este código irá rodar uma única vez
void setup() 
{
  pinMode(12, OUTPUT);
}

// Este código é chamado automaticamente pelo Arduino, ficará em
// loop até que seu Arduino seja desligado
void loop() 
{
  // Ativamos o pino 12 (colocando 5v nele)  
  digitalWrite(12, HIGH);

  // Aguardamos 1 segundo
  delay(1000);

  // Desligamos o pino 12
  digitalWrite(12, LOW);

  // Aguardamos mais um segundo
  delay(1000);

  // Este código irá se repetir eternamente
}
