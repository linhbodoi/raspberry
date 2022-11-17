#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <wiringPi.h>
#include <wiringPiSPI.h>
 
#define chanel 0
#define speed 500000
#define	SS0	8       // GPIO 8
 
int main(){
	wiringPiSetup();
	unsigned char buff[4] = "abc\n";
	unsigned char c[4];
	pinMode(SS0, OUTPUT);
	digitalWrite(SS0, 1);
	int fd;
	if( (wiringPiSPISetup(chanel, speed)) <0){
		fprintf (stderr, "SPI Setup failed: %s\n", strerror (errno));
		return 0;
	}
 
	fd = wiringPiSPIGetFd (0) ;
 
	while(1)
	{
		/* send
		printf("%s",buff);
		fflush(stdout);
		digitalWrite(SS0, 0);
		write (fd, buff, 4) ;
		digitalWrite(SS0, 1);
		delay(1000);
		*/
		printf("Send:%s",buff);
        fflush(stdout);
        digitalWrite(SS0, 0);
        write (fd, buff, 4);// send
        delayMicroseconds(20);
        read (fd,c,4);//revice
        digitalWrite(SS0, 1);
        printf("Receive:%s\n",c);
        fflush(stdout);
        delay(1000);
	}
	return 0;
}
