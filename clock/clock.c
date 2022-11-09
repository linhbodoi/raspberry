#include <wiringPi.h>
#include <stdio.h>
#define  XUNG 7
int main(void)
{
  wiringPiSetup();// thiet lap theo chuan bcm
  pinMode(XUNG,GPIO_CLOCK);
 while(1)
{
  gpioClockSet(XUNG,5000);
}
 return 0;
}

