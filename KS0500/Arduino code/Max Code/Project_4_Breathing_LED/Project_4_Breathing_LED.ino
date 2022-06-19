/*
keyestudio Max Development Board
Project 4
Breathing LED
http://www.keyestudio.com
*/

int ledPin = 10;
int value;
void setup() {
     pinMode(ledPin,OUTPUT);
}
 
void loop()
{
  for (value = 0 ; value < 255; value=value+1)
  {
    analogWrite(ledPin, value);
    delay(5);
  }
  for (value = 255; value >0; value=value-1)
  {
    analogWrite(ledPin, value);
    delay(5);
  } 
}
