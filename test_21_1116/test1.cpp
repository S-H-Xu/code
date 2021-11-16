#include <iostream>
#include <array>

using namespace std;

int main()
{
	const int ArSize = 101;
	array<long double, ArSize> fac_arr;
	
	fac_arr[0] = fac_arr[1] = (long double)1;

	for(int i=2; i<ArSize; i++)
	{
		fac_arr[i] =fac_arr[i-1]*(long double)i; 
	}

	for(int i = 0; i<ArSize; i++)
		cout << fac_arr[i] << endl;

	return 0;
}
