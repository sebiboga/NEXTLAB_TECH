/*
 * NEXTLAB TECH A1 - Senzor Distanta HC-SR04
 * 
 * Conecteaza senzorul ultrasonic HC-SR04:
 * - VCC -> 5V
 * - GND -> GND
 * - TRIG -> Pin 9
 * - ECHO -> Pin 10
 */

const int TRIG_PIN = 9;
const int ECHO_PIN = 10;

void setup() {
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  
  Serial.println("NEXTLAB TECH A1 - Senzor Distanta HC-SR04");
  Serial.println("==========================================");
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  
  long duration = pulseIn(ECHO_PIN, HIGH);
  float distanceCm = duration * 0.0343 / 2;
  float distanceInch = distanceCm / 2.54;
  
  Serial.print("Distanta: ");
  Serial.print(distanceCm);
  Serial.print(" cm | ");
  Serial.print(distanceInch);
  Serial.println(" inch");
  
  delay(500);
}
