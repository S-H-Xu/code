#include <iostream>
#include <array>
using namespace std;

int main()
{
	const int Max_size = 10;
	array<double, Max_size> arr;
	int i = 0;
	
	while(i < Max_size && cin >> arr[i])
	i++;
	
	double total = 0.0;

	for(int j = 0; j < i; j++)
	{
		total += arr[j];
	}
	
	cout << "average = " << total / i << endl;

	return 0;
}
