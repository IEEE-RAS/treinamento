#define LED1 5

int brilho = 0;
int sinal = 1;

// Preparação do Arduino, este código irá rodar uma única vez
void setup()
{
  pinMode(LED1, OUTPUT);
}

// Este código é chamado automaticamente pelo Arduino, ficará em
// loop até que seu Arduino seja desligado
void loop()
{
  // Atualizamos a intensidade do pino 5 com o ultimo valor de brilho
  analogWrite(LED1, brilho);

  // Incrementamos o brilho em 5
  brilho += (5 * sinal);

  // Se o brilho chegou ao valor máximo, passamos a decrementar seu valor
  if (brilho >= 255)
  {
    brilho = 255;
    sinal = -1;
  }

  // Se o brilho chegou ao valor mínimo, passamos a incrementar seu valor
  if (brilho <= 0)
  {
    brilho = 0;
    sinal = 1;
  }

  // Aguardamos 0.1 segundo
  delay(100);

  // Este código irá se repetir eternamente
}
