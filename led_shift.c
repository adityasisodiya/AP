#include <LPC214X.H>
void delay();
int main()
{
int p;
IODIR0 = 0xFF;
while(1)
{
for(p=0;p<8;p++)
{
  IOCLR0 = 0x01<<p;
  delay();
  IOSET0 = 0x01<<p;
  delay();
  IOCLR0 = 0x01<<p;
  delay();
}
}
return 0;
}

void delay()
{
int i,j;
for(i=0;i<800;i++)
for(j=0;j<2500;j++);

}
