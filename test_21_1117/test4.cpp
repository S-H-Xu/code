#include <iostream>
using namespace std;

int main()
{
	double tvarps = 0.0;
	double tax = 0.0;
	
	while(cout << "please entry your salary: ",
			cin >> tvarps && tvarps > 0)
	{
		if(tvarps <= 5000)
			tax = 0;
		else if(tvarps > 5000 && tvarps <= 15000)
			tax = (tvarps - 5000) * 0.1;
		else if(tvarps >15000 && tvarps <= 35000)
			tax = 10000 * 0.1 + (tvarps - 10000) * 0.15;
		else
			tax = 10000 * 0.1 + 20000 * 0.15
			       	+ (tvarps - 35000) * 0.2;

		cout << "tax = " << tax << " tvarps" << endl;	
	}
	
	return 0;
}
