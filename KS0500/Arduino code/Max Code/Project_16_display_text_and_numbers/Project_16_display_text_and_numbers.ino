/*
keyestudio Max Development Board
Project 16
 8*16 dot matrix-display text and numbers
http://www.keyestudio.com
*/
#include <Wire.h>
#include "Keyestudio_LEDBackpack.h"
#include "Keyestudio_GFX.h"
Keyestudio_8x16matrix matrix = Keyestudio_8x16matrix();
void setup() 
{
 matrix.begin(0x70);  // pass in the address
}
void loop() {
 matrix.setTextSize(1);//设置字体大小
 matrix.setTextWrap(false);  // we dont want text to wrap so it scrolls nicely
 matrix.setTextColor(LED_ON);
 matrix.setRotation(1);// 显示旋转
 matrix.clear();
 matrix.setCursor(3,0);//设置字体坐标位置
 matrix.print("OK");   //显示OK
 matrix.writeDisplay();
 delay(1000);
 }
