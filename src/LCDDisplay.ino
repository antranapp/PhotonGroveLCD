#include "Grove_LCD_RGB_Backlight.h"

rgb_lcd lcd;

const int colorR = 200;
const int colorG = 200;
const int colorB = 200;

void setup() {
    // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);

    // Set up background backlight color
    lcd.setRGB(colorR, colorG, colorB);

    lcd.print("hello, world!");

    delay(1000);
}

void loop() {
    int hour = Time.hour();
    int minute = Time.minute();
    int second = Time.second();

    lcd.setCursor(0,1);
    lcd.print(hour);

    lcd.setCursor(2,1);
    lcd.print(":");

    lcd.setCursor(3,1);
    lcd.print(minute);

    lcd.setCursor(5,1);
    lcd.print(":");

    lcd.setCursor(6,1);
    lcd.print(second);

    delay(1000);
}
