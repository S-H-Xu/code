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
	//ÐèÒªÓÃ»§ÊäÈëµÄ²ÎÊý
	double total_water = 0.0;
	double init_D = 0.0;
	double selec_H_D = 0.0;
	double final_D = 0.0;

	//¼ÆËã½á¹û·µ»ØÖµ
	double final_w = 0.0;
	double rec_D = 0.0;
	
	int z = Para_in(&total_water, &init_D, &selec_H_D, &final_D);//µ÷ÓÃ²ÎÊýÊäÈëº¯Êý

	//ÅÐ¶ÏÓÃ»§ÊäÈëÖµÊÇ·ñºÏ·¨
	if (z)
	{
		printf("ÓÃ»§ÊäÈëÖµ·Ç·¨£¡\n");
		return;
	}

	//µ÷ÓÃ¼ÆËãº¯Êý,¼ÆËãÍê³Éºó·µ»ØÑ­»·´ÎÊý
	int count = Calc(total_water, init_D, selec_H_D, final_D,&final_w, &rec_D);

	if (-1 == count)
	{
		return;
	}

	Print(total_water, init_D, selec_H_D, final_D, final_w, rec_D, count);//µ÷ÓÃ½á¹ûÊä³öº¯Êý
}


int main()
{
	int input = 0;
	do
	{
		menu();//´òÓ¡²Ëµ¥
		printf("ÇëÊäÈëÑ¡Ïî²¢ÒÔ»Ø³µ¼ü½áÊø£¨1/0£©:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			My_calc();//µ÷ÓÃ¼ÆËãÆ÷º¯Êý
			break;
		case 0:
			printf("ÍË³ö¼ÆËã³ÌÐò,Çë°´ÈÎÒâ¼ü½áÊø¡­¡­\n");
			getchar();
			getchar();
			break;
		default:
			printf("ÊäÈë·Ç·¨£¬ÇëÖØÐÂÊäÈë!\n");
			break;
		}

	} while (input);
	
	return 0;
}
