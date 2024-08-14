
#define DELAY 500

#define TRIGGER 2
#define ECHO 3

#define BUZZER 10


// int trigger_pin = 2;
// int echo_pin = 3;
// int buzzer_pin = 10;
int time;
int distance;

void setup()
{
    // Configuração dos pinos para o sensor de Distância
    pinMode(TRIGGER, OUTPUT);
    pinMode(ECHO, INPUT);

    // Configuração do pino do buzzer
    pinMode(BUZZER, OUTPUT);
}

void loop()
{
    // Pulso de gatilho para o sensor de distância (10ms)
    digitalWrite(TRIGGER, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIGGER, LOW);

    // Leitura do echo do pulso
    time = pulseIn(ECHO, HIGH);

    // Conversão do tempo de echo em distância em [cm]
    distance = (time * 0.034) / 2;

    // Envia a mensagem de distância via porta serial
    Serial.print(" Distance= ");
    Serial.println(distance);

    // Exibe/ativa sinal caso a distância seja menor que 100cm
    if (distance <= 100)
    {
        digitalWrite(BUZZER, HIGH);
        digitalWrite(LED_BUILTIN, HIGH);
    }
    else
    {
        digitalWrite(BUZZER, LOW);
        digitalWrite(LED_BUILTIN, LOW);
    }
    
    delay(DELAY);
}
