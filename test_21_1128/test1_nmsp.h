#ifndef __TEST1_NMSP_H__
#define __TEST1_NMSP_H__

namespace SALES
{
	const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};

};

using namespace SALES;

void setSales(Sales& s, const double ar[], int n);
void setSales(Sales& s);
void ShowSales(const Sales& s);

#endif
