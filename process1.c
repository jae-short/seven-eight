#include <stdio.h>

#define TRIGGER_PIN 4
#define ECHO_PIN 5
#define MAX_DISTANCE 100

stdio sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void loop(){
    int distance = sonar.ping_cm();
    delay(100)
}

int output, input;

void setup(){
    pinmode(3, output);
}
void loop(){
    analogwrite(3, 255);
    delay(500);
    analogwrite(3, 0);
    delay(500);
}
