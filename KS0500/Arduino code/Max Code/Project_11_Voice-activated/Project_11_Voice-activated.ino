/*
keyestudio Max Development Board
Project11
Voice-activated
http://www.keyestudio.com
*/
const int SOUND_PIN = A7;
const int LED_PIN = 13;
void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // 读取A7模拟信号
  int value = analogRead(SOUND_PIN);
  // 输出信号值
  Serial.println(value);
  if(value > 5)
  {
    // 大于阈值，则想引脚13输出高电平，LED点亮
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
  }
  else
  {
    // 小于阈值，则想引脚13输出低电平，LED熄灭
    digitalWrite(LED_PIN, LOW);
  }
}
