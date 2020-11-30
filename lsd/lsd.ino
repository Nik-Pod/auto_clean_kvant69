#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);  // Устанавливаем дисплей
void setup()
{
  lcd.init();                     
  lcd.backlight();// Включаем подсветку дисплея
  // lcd.setCursor(2, 0);
  // lcd.print("DOOR CLOSED");
  lcd.setCursor(2, 0);
  lcd.print("DESINFECTION");
}
void loop()
{
  for (int i = 0; i < 1; i++){
    for (int i = 0; i < 16; i ++) {
      lcd.setCursor(i, 1);
      lcd.print("*");
      delay(300);
    }
    for (int i = 0; i < 16; i ++) {
      lcd.setCursor(i, 1);
      lcd.print(" ");
      delay(300);
    }
  }
  lcd.setCursor(6, 1);
  lcd.print("DONE");
  delay(10000);
  lcd.setCursor(0, 1);
  lcd.print("                ");
}
