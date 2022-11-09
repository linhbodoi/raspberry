
#include <wiringPi.h>
#include <stdio.h>
#define  LED 1 // chân pwm duy nhất GPIO 18


int main(void)
{
  wiringPiSetup();
  pinMode(LED,PWM_OUTPUT);
  pwmSetMode(PWM_MODE_MS); //2 chế độ :PWM_MODE_MS,PWM_MODE_BAL
  pwmSetRange(100);// SET ĐỘ RỘNG MẶC ĐỊNH 100 CHO DỄ CHIA
  pwmSetClock(9);// SET TẦN SỐ : (19.2 /19)*1000=10khz trong đó 19.2 thạch anh nội
 while(1)
{
  pwmWrite(1,40);//set độ rộng xung 70%
}
 return 0;
}
