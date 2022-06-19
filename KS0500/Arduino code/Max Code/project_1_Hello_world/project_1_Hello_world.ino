/*
keyestudio Max Development Board
Project 1
hello world
http://www.keyestudio.com
*/
int val;//define variable val
void setup()
{
Serial.begin(9600);//Set the baud rate to 9600, which must be consistent with the software settings.
}
void loop()
{
val=Serial.read();//Read the instructions or characters sent by the PC to the Arduino and assign them to val
if(val=='h')//Judging whether the received command or character is "h".
{//If the received is "h"
Serial.println("Hello World!");//Display "Hello World!"
}}
//*********************************************************
