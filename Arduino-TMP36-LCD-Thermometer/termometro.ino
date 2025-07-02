#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int sensorPin = A0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Temp: ");
}

void loop() {
  int leitura = analogRead(sensorPin);
  float voltagem = leitura * (5.0 / 1023.0);
  float temperaturaC = (voltagem - 0.5) * 100.0;

  lcd.setCursor(0, 1);
  lcd.print(temperaturaC);
  lcd.print((char)223);
  lcd.print("C");

  delay(1000);
}
