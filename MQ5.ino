#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int mq5Pin = A0;
int mq5Value = 0;



void setup() {
   lcd.begin(16, 2);
   lcd.print("ATMOSPHERE");
  

}

void loop() {
  mq5Value = analogRead(A0);
  lcd.setCursor(0,1);
  lcd.print("Valeur=");
  lcd.print(mq5Value);
  delay(1000);
  lcd.print("");
  delay(1);

}
