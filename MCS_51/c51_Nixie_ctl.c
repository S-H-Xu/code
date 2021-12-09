#include <REGX52.H>
#include <INTRINS.H>

void Delay(unsigned int);
void Nixie_ctl(unsigned char, unsigned char);

int main()
{
	while(1)
	{
		unsigned char site = 1;
		unsigned char number =1;
		
		while(site <= 8)
		{
			Nixie_ctl(site, number);
			site++;
			number++;
			//Delay(20);		
		}
	}
	return 0;
}


void Delay(unsigned int xms)		//@11.0592MHz
{
	unsigned char i, j;
	
	while(xms--)
	{
		_nop_();
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
	}
	
}

void Nixie_ctl(unsigned char site, unsigned char number)
{
	char Nix_num[] = {0x3F, 0x06, 0x5B, 0X4F, 0x66, 0X6D,
						0x7D, 0x07, 0x7F, 0x6F};
	
	switch(site)
	{
		case 1:
			P2_4 = 0; P2_3 = 0; P2_2 = 0; 
			break;
		case 2:
			P2_4 = 0; P2_3 = 0; P2_2 = 1; 
			break;
		case 3:
			P2_4 = 0; P2_3 = 1; P2_2 = 0; 
			break;
		case 4:
			P2_4 = 0; P2_3 = 1; P2_2 = 1; 
			break;
		case 5:
			P2_4 = 1; P2_3 = 0; P2_2 = 0; 
			break;
		case 6:
			P2_4 = 1; P2_3 = 0; P2_2 = 1; 
			break;
		case 7:
			P2_4 = 1; P2_3 = 1; P2_2 = 0; 
			break;
		case 8:
			P2_4 = 1; P2_3 = 1; P2_2 = 1; 
			break;
	}
		
		P0 = Nix_num[number];
		Delay(1);
		P0 = 0x00;
		
}
