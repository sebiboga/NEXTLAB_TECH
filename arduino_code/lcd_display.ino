/*
 * NEXTLAB TECH A1 - Afisare LCD 16x2 cu I2C
 * 
 * Conecteaza modulul LCD I2C:
 * - VCC -> 5V
 * - GND -> GND
 * - SDA -> A4
 * - SCL -> A5
 * 
 * Foloseste biblioteca LiquidCrystal_I2C
 * (Library Manager -> instaleaza LiquidCrystal I2C)
 */

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  
  lcd.setCursor(0, 0);
  lcd.print("NEXTLAB TECH A1");
  lcd.setCursor(0, 1);
  lcd.print("Arduino Compatible");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
  lcd.print(" sec");
  
  delay(1000);
}
