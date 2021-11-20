#include <REGX52.H>
#include <INTRINS.H>

void Delay1ms(unsigned char);

int main()
{
	unsigned char xms = 500;
	char tmp = 1; 
	int i = 8;
	
	while(i--)
	{
		P2 = ~tmp;
		tmp = tmp << 1;
		Delay1ms(xms);
		P2 = 0xFF;
		Delay1ms(xms);
	}
	
	return 0;
}


void Delay1ms(unsigned char xms)		//@11.0592MHz
{
	unsigned char i, j;
	while(xms)
	{
		_nop_();
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
	
}
