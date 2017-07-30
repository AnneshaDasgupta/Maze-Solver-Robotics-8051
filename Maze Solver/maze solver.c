#include <reg52.h>
#include <stdio.h>
#define lt 0x06;
#define rt 0x09;
#define st 0x0a;
#define stop 0x00;

unsigned int a,i,j;
void delay(unsigned int t)
{
	for (i=0;i<t;i++);
{
	for(j=0;j<1275;j++);
}
}
void main()
{
	while(1)
	{
		
a=P1&0x07;
if(a==0x03)
{
	delay(20);
	P2=lt;
}
else if ((a==0x05)||(a==0x01))
{
	P2=st;
}
else if ((a==0x02)||(a==0x06)||(a==0x04)||(a==0x07))
{
	P2=rt;
	delay(10);
}
else
{
	delay(30);
	P2=stop;
}
}
	}                        