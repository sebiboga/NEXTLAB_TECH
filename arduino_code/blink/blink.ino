/*
 * NEXTLAB TECH A1 - LED Stins
 * 
 * LED-ul pe pinul 10 va fi stins
 */

const int LED_PIN = 10;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
}
