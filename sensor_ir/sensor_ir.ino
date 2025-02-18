/**
 * @brief Sketch para teste simples de sensor de distância IR ( Infravermelho ) E18-D80NK NPN
 * 
 */


// Define uso dos resistores pullup internos
// #define PULLUPS

// Definições de constantes
#define DELAY 100

#define SENSORPIN 5
#define LEDPIN 12

void setup()
{
    // Reflete a definição do uso de pullups internos
#ifdef PULLUPS
    pinMode(SENSORPIN, INPUT_PULLUP);
#else
    pinMode(SENSORPIN, INPUT);
#endif

    pinMode(LEDPIN, OUTPUT);
}

void loop()
{
    /**
     * Leitura direta do estado do sensor repassada para a gravação do estado do LED
     * mas com inversão desse estado por conta da natureza NPN do sensor IR
     */
    digitalWrite(LEDPIN, !digitalRead(SENSORPIN));
    delay(DELAY);
}