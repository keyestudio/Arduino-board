#include <Wire.h>
#include "Keyestudio_LEDBackpack.h"
#include "Keyestudio_GFX.h"

Keyestudio_8x16matrix matrix = Keyestudio_8x16matrix();

void setup() 
{
 matrix.begin(0x70);  // pass in the address
}

static const uint8_t PROGMEM
  heart_bmp[] =
  {0x00, 0x00, 0x00, 0x0e, 0x1f, 0x3f, 0x7f, 0xfe, 0xfe, 0x7f, 0x3f, 0x1f, 0x0e, 0x00, 0x00, 0x00},
  smile_bmp[] =
  { 0x00, 0x00, 0x00, 0x04, 0x22, 0x42, 0x84, 0x80, 0x80, 0x84, 0x42, 0x22, 0x04, 0x00, 0x00, 0x00 },
  frown_bmp[] =
  { 0x00, 0x00, 0x00, 0x02, 0x84, 0x44, 0x22, 0x20, 0x20, 0x22, 0x44, 0x84, 0x02, 0x00, 0x00, 0x00 };

void loop() {
  //matrix.setRotation(1);
  matrix.clear();
  matrix.drawBitmap(0, 0,heart_bmp, 8, 16, LED_ON);
  matrix.writeDisplay();
  delay(1000);
  
  matrix.clear();
  matrix.drawBitmap(0, 0, smile_bmp, 8, 16, LED_ON);
  matrix.writeDisplay();
  delay(1000);

  matrix.clear();
  matrix.drawBitmap(0, 0, frown_bmp, 8, 16, LED_ON);
  matrix.writeDisplay();
  delay(1000);


}