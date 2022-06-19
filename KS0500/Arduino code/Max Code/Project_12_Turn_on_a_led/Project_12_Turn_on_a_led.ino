/*
keyestudio Max Development Board
Project 12
 8*16 dot matrix-turn on a led
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
void loop() 
{
  matrix.clear();  // clear display
  matrix.drawPixel(2, 3, LED_ON);  
  matrix.writeDisplay();  // write the changes we just made to the display
}
