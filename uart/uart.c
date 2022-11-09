#include <wiringPi.h>
#include <stdio.h>
#include <wiringSerial.h>

int main(void)
{
  int fd;
  wiringPiSetup();
  fd=serialOpen("/dev/serial0",9600);//chọn cổng serial và tốc độ baund
 while(1)
{
  if(serialGetchar(fd)==97)
  {
    serialPuts(fd," hello_linhne ");
  }
  else if (serialGetchar(fd)==99)
  {
    serialPrintf(fd,"phamconglinh2019603533");
  }
  //serialPuts(fd99," hello_linhne ");//send 1 chuỗi
  //serialPrintf(fd,"phamconglinh2019603533");// in 1 tin nhăn qua serial
  
  //printf(" -> %3d",serialGetchar(fd));
  //fflush(stdout);  
}
 return 0;
}
//khi biên dịch sử dụng lệnh sudo nano.uart
