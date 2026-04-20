/*
 * NEXTLAB TECH A1 - Citire Temperatura cu LM35
 * 
 * Conecteaza senzorul LM35:
 * - VCC -> 5V
 * - GND -> GND
 * - OUT -> A0
 */

const int SENSOR_PIN = A0;

void setup() {
  Serial.begin(9600);
  Serial.println("NEXTLAB TECH A1 - Senzor Temperatura LM35");
  Serial.println("==========================================");
}

void loop() {
  int rawValue = analogRead(SENSOR_PIN);
  float voltage = rawValue * (5000.0 / 1024.0);
  float temperatureC = voltage / 10.0;
  float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;

  Serial.print("Temperatura: ");
  Serial.print(temperatureC);
  Serial.print(" °C | ");
  Serial.print(temperatureF);
  Serial.println(" °F");

  delay(1000);
}
