/*
keyestudio Max Development Board
Project 9
To make a lamp
http://www.keyestudio.com
*/

int ledpin1=13;//定义数字13 接口
int ledpin2=10;////定义数字10 接口
int buttonpin1=2;//定义数字2 接口
int buttonpin2=3;//定义数字3 接口
int val1;//定义变量val1
int val2;//定义变量val2

void setup()
{
pinMode(ledpin1,OUTPUT);//定义小灯接口为输出接口
pinMode(ledpin2,OUTPUT);//定义小灯接口为输出接口
pinMode(buttonpin1,INPUT);//定义按键接口为输入接口
pinMode(buttonpin2,INPUT);//定义按键接口为输入接口
}
void loop()
{
val1=digitalRead(buttonpin1);//读取数字2 口电平值赋给val
val2=digitalRead(buttonpin2);//读取数字3 口电平值赋给val
if(val1==HIGH)//检测按键是否按下，按键按下时小灯亮起
{ 
  digitalWrite(ledpin1,LOW);
}
else
{ 
  digitalWrite(ledpin1,HIGH);
}

if(val2==HIGH)//检测按键是否按下，按键按下时小灯亮起
{ 
  digitalWrite(ledpin2,LOW);
}
else
{
  digitalWrite(ledpin2,HIGH);}
}
