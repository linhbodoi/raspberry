#include <wiringPi.h>
#include <stdio.h>
#include <wiringSerial.h>

int main(void)
{
  int fd;
  wiringPiSetup();
  fd=serialOpen("/dev/serial0",9600);//chọn cổng serial và tốc độ baund
  //pinMode(0,OUTPUT);
 while(1)
{
  
  int a = serialGetchar(fd);
  printf("%d\n",a);

  if(a==97)
 {
   a=97;
   a=97;
   a=97;
   digitalWrite(0,1);  
 }
  else if(a==99)
 {
    digitalWrite(0,0); 
 }
  //serialPuts(fd," hello_linhne ");//send 1 chuỗi
  //serialPrintf(fd,"phamconglinh2019603533");// in 1 tin nhăn qua serial
  //serialFlush(fd);// hàm chờ đến khi dữ liệu gửi xong
  //fflush(stdout); 
  //delay(1000); 
}
 return 0;
}
//khi biên dịch sử dụng lệnh sudo nano.uart
