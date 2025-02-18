// Seleção de modo de resistores pullup internos
// #define PULLUPS

#define DEALY 50
// Definições de constantes e pinos
#define BUTTONPIN 5
#define LEDPIN 12


void setup() {
#ifdef PULLUPS
  pinMode(BUTTONPIN, INPUT_PULLUP);
#else
  pinMode(BUTTONPIN, INPUT);
#endif
  pinMode(LEDPIN, OUTPUT);
}

void loop() {
  // Repassa a inversão da leitura do estado do botão para o estado do LED
  digitalWrite(LEDPIN, !digitalRead(BUTTONPIN));
  delay(50);
}
