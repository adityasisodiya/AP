#include <LPC214X.H>
void delay();
int main()
{
IODIR0 = 0xFF;
while(1)
{
  IOCLR0 = 0xFF;
  delay();
  IOSET0 = 0xFF;
  delay();
}
return 0;
}

void delay()
{
int i,j;
for(i=0;i<800;i++)
for(j=0;j<2500;j++);

}
