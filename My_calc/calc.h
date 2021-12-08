#pragma once
#include <stdio.h>

//宏定义参考倍率
#define RATIO_ELEC_H 1000000 //电解速度参考倍率，默认一百万，源代码可以自行修改

//函数申明
int Para_in(double*, double*, double*, double*);
int Calc(double, double, double, double, double*, double*);
void Print(double, double, double, double, double, double, int);