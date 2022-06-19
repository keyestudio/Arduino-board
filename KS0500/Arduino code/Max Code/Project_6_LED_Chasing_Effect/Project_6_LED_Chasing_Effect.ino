/*
keyestudio Max Development Board
Project 6
LED Chasing Effect
http://www.keyestudio.com
*/

int  redled = 8;
int  greenled = 10;
int  yellowled =13;
void  setup(){
 pinMode(redled, OUTPUT);
 pinMode(greenled, OUTPUT);
 pinMode(yellowled, OUTPUT);
  
 }
    void loop()
    {
    digitalWrite(redled, HIGH);//点亮红色小灯
    delay(100);//延时0.1 秒
    digitalWrite(redled, LOW); //熄灭红色小灯
    delay(100);//延时1 秒
    digitalWrite(greenled, HIGH);//点亮绿色小灯
    delay(100);//延时0.1 秒
    digitalWrite(greenled, LOW);//熄灭绿色小灯
    delay(100);//延时0.1 秒
    digitalWrite(yellowled, HIGH);//点亮黄色小灯
    delay(100);//延时0.1 秒
    digitalWrite(yellowled, LOW);//熄灭黄色小灯
    delay(100);//延时0.1 秒
     }
