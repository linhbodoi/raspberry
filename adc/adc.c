//tiền sử lý
#include <wiringPi.h>
#include <stdio.h>
#include <ads1115.h>
int x;
int y;

int main(void)
{
  wiringPiSetup();// thiet lap theo chuan bcm
  ads1115Setup(65,0x48);//gia tri > 64 vs  dia chi i2c
 while(1)
{
  x=analogRead(65+0);// analog kenh 0
  printf("%d x\n",x);
  delay(500);
  y=analogRead(65+1);// analog kenh 1
  printf("%d y\n",y);
  delay(500);
  
}
 return 0;
}
