#include <iostream>
#include "test_f.h"

int main()
{
	Plorg p1;
	Plorg p2 {"haha"};
	Plorg p3 {"hehe", 12};
	
	std::cout << "p1: " << std::endl;
	p1.show();
	std::cout << "p2: " << std::endl;
	p2.show();
	std::cout << "p3: " << std::endl;
	p3.show();

	return 0;
}
