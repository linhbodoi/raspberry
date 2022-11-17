#include <stdio.h>
#include <wiringPi.h>
#include <wiringPiI2C.h>
 
#define addrSlave 0x08// địa chỉ đích
 
int val = 0x20;  
 
int main(){
 
	int fd = wiringPiI2CSetup(addrSlave);// mở i2c và địa chỉ đích đến
 
	while(1){
		wiringPiI2CWrite(fd,val);// ghi vào địa chỉ đích 1 giá trị val
		printf("%d",val);
		fflush(stdout);
		delay(1000);
	}
	return 0;
}
