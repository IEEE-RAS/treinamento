
#define DELAY 500

#define PINOA 10
#define PINOB 13


int trigger_pin = 2;
int echo_pin = 3;
int buzzer_pin = 10;
int time;
int distance;

void setup()
{
    pinMode(trigger_pin, OUTPUT);
    pinMode(echo_pin, INPUT);
    pinMode(buzzer_pin, OUTPUT);
    pinMode(13, OUTPUT);
}

void loop()
{
    digitalWrite(trigger_pin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigger_pin, LOW);
    time = pulseIn(echo_pin, HIGH);
    distance = (time * 0.034) / 2;
    if (distance <= 100)
    {
        Serial.print(" Distance= ");
        Serial.println(distance);
        digitalWrite(PINOA, HIGH);
        digitalWrite(PINOB, HIGH);
        delay(DELAY);
    }
    else
    {
        Serial.print(" Distance= ");
        Serial.println(distance);
        digitalWrite(PINOA, LOW);
        digitalWrite(PINOB, LOW);
        delay(DELAY);
    }
}
