//Author: Marble
//Created: 23 December 2022

//Library
#include <LiquidCrystal_I2C.h>

//Setup LCD-I2C
LiquidCrystal_I2C (0x27,16,2);

void setup()
{
     lcd.init();
     lcd.backlight();
     lcd.setCursor(0,0);
     lcd.print("Hello World");
     lcd.setCursor(0,1);
     lcd.print("I'm Newbie");
}
void loop()
{
}

