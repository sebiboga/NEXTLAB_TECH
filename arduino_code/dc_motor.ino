/*
 * NEXTLAB TECH A1 - Control Motor DC cu L298N
 * 
 * Conecteaza modulul L298N:
 * - ENA -> Pin 5 (PWM)
 * - IN1 -> Pin 6
 * - IN2 -> Pin 7
 * - VCC -> Baterie externa (7-12V)
 * - GND -> GND comun
 */

const int ENA = 5;
const int IN1 = 6;
const int IN2 = 7;

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
}

void loop() {
  analogWrite(ENA, 200);
  delay(2000);
  
  analogWrite(ENA, 0);
  delay(1000);
  
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, 200);
  delay(2000);
  
  analogWrite(ENA, 0);
  delay(1000);
  
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
}
