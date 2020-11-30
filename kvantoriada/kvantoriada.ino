#include <GPRS_Shield_Arduino.h>
#include <SoftwareSerial.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
SoftwareSerial mySerial(10, 11);

#define PHONE_NUMBER "+79301664450"
#define MESSAGE "Hello from GPRS Shield"

void setup() {
  lcd.init();                     
  lcd.backlight();
  lcd.print("OK");
}

void loop() {
  // put your main code here, to run repeatedly:

}
