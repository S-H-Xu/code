#include <iostream>
#include "test1_nmsp.h"

using namespace SALES;

void setSales(Sales& s, const double ar[], int n)
{
	double temp = 0.0;

	for(int i = 0; i < QUARTERS; i++)
	{
		if( i < n)
		{
			s.sales[i] = ar[i];
			temp += ar[i];
		}
		else
			s.sales[i] = 0.0;
	}
	s.average = temp/n;
	s.max = s.sales[0];
	s.min = s.sales[0];
	for(int i = 1; i < n; i++)
		s.max = s.max > s.sales[i] ? s.max : s.sales[i];
	for(int i = 1; i < n; i++)
		s.min = s.min < s.sales[i] ? s.min : s.sales[i];
}

void setSales(Sales& s)
{
	double temp = 0.0;
	double temp_ar[4] = {1.0, 3.5, 4.2 ,1.1};
	for(int i = 0; i < 4; i ++)
	{
		s.sales[i] = temp_ar[i];
		temp += temp_ar[i];
	}

	s.average = temp/4;
	s.max = temp_ar[0];
	s.min = temp_ar[0];
	for(int i = 1; i < 4; i++)
	{
		s.max = s.max > temp_ar[i] ? s.max : temp_ar[i];
		s.min = s.min < temp_ar[i] ? s.min : temp_ar[i];
	}
}

void ShowSales(const Sales& s)
{
	for(int i = 0; i < 4; i++)
	{
		std::cout << "sales" << i + 1 << ": " << s.sales[i] << std::endl;
	}
	std::cout << "average: " << s.average << std::endl;
	std::cout << "max = " << s.max << std::endl;
	std::cout << "min = " << s.min << std::endl;
}
