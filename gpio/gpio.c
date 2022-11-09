//tiền sử lý
#include <wiringPi.h>
#include <stdio.h>
// định nghĩa chân
#define  OUT 17// CHAN 17 DAU RA
#define  IN  27// CHAN 2 DAU RS

int main(void)
{
  wiringPiSetupGpio();// thiet lap theo chuan bcm
  //thietlapvaora
  pinMode(17,OUTPUT);
  pinMode(27,INPUT);
 while(1)
{
 if(digitalRead(27)==0)
{
 digitalWrite(17,1);
 printf("bat led\n");
 delay(500);
}
else
{
 digitalWrite(17,0);
 printf("tat led\n");
 delay(500);

}

}
 return 0;
}
