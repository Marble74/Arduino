//Author: Marble
//Created: 23 December 2022
//Before using this code you must first know your LCD address then make sure you have installed the LiquidCrystal_I2C Library on your Arduino IDE

// GND to GND
// VCC to VCC
// A4 to SDA
// A5 to SCL

//Library
#include <LiquidCrystal_I2C.h>

//Setup LCD I2C
LiquidCrystal_I2C (0x27,16,2);

void setup()
{
     lcd.init(); //initialize
     lcd.backlight();
     lcd.setCursor(0,0); 
     lcd.print("Hello World"); // print text for LCD
     lcd.setCursor(0,1);
     lcd.print("I'm Newbie"); // print text for LCD
}
void loop()
{
 
}

