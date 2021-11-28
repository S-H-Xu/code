#include <iostream>
#include "test1_nmsp.h"

int main()
{
	using namespace SALES;
	Sales s1, s2;
	double ar[QUARTERS];
	int count = 0;
	
	for(int i =0; i < QUARTERS; i++)
	{
		std::cout << "enter sale" << i + 1 << " (quit with 'q'): \n";
		std::cin >> ar[i];
		if(!std::cin)
			break;
		count++;
	}

	setSales(s1, ar, count);
	setSales(s2);
	std::cout << "s1: " << std::endl;
	ShowSales(s1);
	std::cout << "s2: " << std::endl;
	ShowSales(s2);

	return 0;
}
