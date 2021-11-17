#include <iostream>
using namespace std;

int main()
{	
	int input = 0;
	cout << "please entry the number of line: ";
	cin >> input;

	for(int i = 1; i <= input; i++)
	{
		for(int j = (input-i); j > 0; j-- )
		{
			cout << ".";
		}

		for(int z = 0; z < i; z++)
		{	
			cout << "*";
		}
		
		cout << endl;
	}

	return 0;
}
