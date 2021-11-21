#include <iostream>
using namespace std;

double Harm_mean(double, double);

int main()
{
	double x = 0.0;
	double y = 0.0;

	cout << "please enter the first number: ";
	cin >> x;
	cout << "please enter the second number: ";
	cin >> y;
	if(x*y)
	{
		double z = Harm_mean(x,y);
		cout << "Harmean = " << z << endl;
	}
	else
	{
		cout << "please enter non_zero number!\n";
	}

	return 0;
}

double Harm_mean(double x, double y)
{
	return 2.0 * x * y / (x + y);
}
