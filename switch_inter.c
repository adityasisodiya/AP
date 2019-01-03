/*Code For Switch Interface*/

#include<LPC214x.h>
void delay(int d);
int main()
{

	unsigned int val;
	unsigned int SW0;
	unsigned int SW1;
	int c;
	PINSEL0= 0x00000000;
	PINSEL1 = 0x00000000;
	PINSEL2= 0X00000000;
	IODIR1 = 0x00FF0000;		   
	while(1)
	{
		
		SW0=(!(IOPIN0&0X00008000));   
		SW1=(!(IOPIN0&0X00010000));   
		
	
		if(SW0==0)
		{
			val=1;
		}
		if(SW1==0)
		{
			val=2;
		}

		if(val==1)
		{
			
			for (c=16;c<24;c++)
			{
				IOSET1 =1<<c;
				delay (2500);
				IOCLR1 = 1<<c;
				delay (2500);
			
			}
		}
		if(val==2)
		{
		
			for (c=0;c<8;c++)
			{
				IOSET1 =0x00800000>>c;
				delay (2500);
				IOCLR1 = 0x00800000>>c;
				delay (2500);
				
			}
		}
	}
	return 0;
}

void delay (int d)
{
	int i,j;
	for (i=0;i<d;i++)
	{
		for (j=0;j<1008;j++)
		{
		}
	}
}

