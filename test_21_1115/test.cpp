#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int* p = new int[n];
	int i = 0;
	for(i = 0; i < n; i++)
	{
		p[i] = i;
	}
	for(i = 0; i < n; i++)
	{
		cout << p[i] << endl;
}

	delete[] p;
	p = NULL;

	return 0;
}
