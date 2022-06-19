/*
keyestudio Max Development Board
Project 17
8*16 dot matrix-display images
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
static const uint8_t PROGMEM
smile_bmp[] =
{ 0x00, 0x04, 0x02, 0x02, 0x04, 0x20, 0x40, 0x40, 0x40, 0x40, 0x20, 0x04, 0x02, 0x02, 0x04, 0x00};
void loop() {
  //matrix.setRotation(1);
  matrix.clear();
  matrix.drawBitmap(0, 0, smile_bmp, 8, 16, LED_ON);
  matrix.writeDisplay();
  delay(1000);
}
