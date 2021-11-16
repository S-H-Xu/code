#include <iostream>

int main()
{
	int min_int = 0;
	int max_int = 0;
	int sum = 0;

	std::cout << "please entry the minimum integer: ";
	std::cin >> min_int;
	std::cout << "please entry the maximum integer: ";
	std::cin >> max_int;

	for(int i = min_int; i <= max_int; i++)
	{
		sum += i; 
	}
	std::cout << "the sum of min_int to max_int is: " << sum << std::endl;

	return 0;
}
