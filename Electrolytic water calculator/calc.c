#define _CRT_SECURE_NO_WARNINGS 1
#include "calc.h"

//初始值录入函数，用户输入参数非零返回0，输入参数含0则返回1
int Para_in(double* p_total_water, double* p_init_D, double* p_selec_H_D, double* p_final_D)
{
	//临时变量，用于单位转换
	double tmp_init_D = 0.0;
	double tmp_final_D = 0.0;

	printf("请输入待电解水的总量,以回车结束（单位：Kg）:>");
	scanf("%lf", p_total_water);

	printf("请输入氘的初始含量,以回车结束（单位：%%）:>");
	scanf("%lf", &tmp_init_D);
	*p_init_D = (tmp_init_D / 100);//去除%

	printf("请输入电解选择性,以回车结束（例如H:D =10）:> H:D = ");
	scanf("%lf", p_selec_H_D);

	printf("请输入目标氘含量,以回车结束（单位：%%）:> ");
	scanf("%lf", &tmp_final_D);
	*p_final_D = (tmp_final_D / 100);//去除%

	//判断输入值是否合法,合法返回0，非法返回1
	if (((*p_total_water && *p_init_D) && *p_selec_H_D) && *p_final_D)
	{
		return 0;
	}
	else
		return 1;
}

//主计算函数，将用户输入变量传入此函数
int Calc(double total_water, double init_D, double selec_H_D, double final_D, double* p_final_w, double* p_rec_D)
{
	printf("计算进行中，请稍后……\n");

	double _D = init_D;//任意时刻重水含量,初始值赋值为用户输入值init_D

	//一个计算微元水的电解量
	//宏定义的 RATIO_ELEC_H 为电解速度参考倍率，默认为一百万，源代码可更改其值
	//即初始计算微元水的电解量为总量的百万分之一
	double rate_H = (total_water / RATIO_ELEC_H)*(1-init_D);//初始一个计算微元轻水电解量
	double rate_D = ((1 / selec_H_D) * rate_H) * init_D;//初始一个计算微元重水电解量

	//任意时刻水的质量,初始值赋值为用户输入值total_water
	double _water = total_water;
	int count = 0;//循环计数器，用于debug，不显示给用户

	while (_D < final_D)//循环直至当前氘含量大于目标值
	{
		//限制循环次数小于五千万次
		if (count > 5e7)
		{
			printf("数值溢出，请重新设置合理参数!\n");
			return -1;
		}
		//每一次循环即一个计算微元
		double tmp_water = _water;//临时变量，记录上一刻水的质量
		_water = _water - (rate_H + rate_D);//调整为一个微元后的剩余水量
		_D = (tmp_water * _D - rate_D) / _water;//当前氘含量

		//根据重水含量的变化调整下一个计算微元轻水的电解量
		//总电解水量也随剩余水量调整
		rate_H = (_water / RATIO_ELEC_H) * (1 - _D);
		//调整下一个计算微元重水的电解量
		rate_D = ((1 / selec_H_D) * rate_H) * _D;

		count++;//计数器自增
	}
	
	//指针调整外部变量，将计算结果回传
	*p_final_w = _water;
	*p_rec_D = (_water * _D) / (total_water * init_D);

	return count;//返回循环次数
}

//打印函数，将结果输出在屏幕上，函数参数为用户输入值以及计算结果
void Print(double total_water,double init_D,double selec_H_D, double final_D,
			double final_water, double rec_D, int count)
{
	printf("\n");
	printf("初始条件如下:\n");
	printf("电解水总量：%lf\n", total_water);
	printf("初始氘含量：%lf%%\n", init_D*100);
	printf("电解选择性：H:D = %lf\n", selec_H_D);
	printf("目标氘含量：D%% = %lf%%\n", final_D*100);
	printf("\n");
	printf("计算结果如下：\n");
	printf("达到目标氘含量时，剩余水的量为：%lf Kg\n", final_water);
	printf("氘的回收率为Rec_D = %lf\n", rec_D);
	//debug时count提供参考，不显示给用户
	//printf("计算循环次数为%d\n", count);
	printf("计算完成！\n");
	printf("\n");
}

