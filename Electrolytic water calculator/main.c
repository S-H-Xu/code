#define _CRT_SECURE_NO_WARNINGS 1
#include "calc.h"

void menu()
{
	printf("Calculator - Created by sihan xu\n");
	printf("************************************\n");
	printf("*****    1.start     0.exit    *****\n");
	printf("************************************\n");
	printf("************************************\n");
}


void My_calc()
{
	//需要用户输入的参数
	double total_water = 0.0;
	double init_D = 0.0;
	double selec_H_D = 0.0;
	double final_D = 0.0;

	//计算结果返回值
	double final_w = 0.0;
	double rec_D = 0.0;
	
	int z = Para_in(&total_water, &init_D, &selec_H_D, &final_D);//调用参数输入函数

	//判断用户输入值是否合法
	if (z)
	{
		printf("用户输入值非法！\n");
		return;
	}

	//调用计算函数,计算完成后返回循环次数
	int count = Calc(total_water, init_D, selec_H_D, final_D,&final_w, &rec_D);

	if (-1 == count)
	{
		return;
	}

	Print(total_water, init_D, selec_H_D, final_D, final_w, rec_D, count);//调用结果输出函数
}


int main()
{
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请输入选项并以回车键结束（1/0）:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			My_calc();//调用计算器函数
			break;
		case 0:
			printf("退出计算程序,请按任意键结束……\n");
			getchar();
			getchar();
			break;
		default:
			printf("输入非法，请重新输入!\n");
			break;
		}

	} while (input);
	
	return 0;
}