#include <REGX52.H>
#include "timer.h"
void Timer0_Init(void)		//10毫秒@11.0592MHz
{
	TMOD &= 0xF0;		//设置定时器模式
	TMOD |= 0x01;		//设置定时器模式
	TL0 = 0x00;		//设置定时初始值
	TH0 = 0xDC;		//设置定时初始值
	TF0 = 0;		//清除TF0标志
	TR0 = 1;		//定时器0开始计时
	
	ET0 = 1;
	EA = 1;
	PT0 = 0;
}

/*
//copy to main function
void Timer0_Routine() interrupt 1
{
	static unsigned int T0Count;
	T0Count++;
	TL0 = 0x00;		
	TH0 = 0xDC;
	if(T0Count >= 100)//timer = 100*10ms = 1 sec
	{
		//example:
		//P2_0 = ~P2_0;
		T0Count = 0;
	}
}
*/

