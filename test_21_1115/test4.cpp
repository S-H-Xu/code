#include <iostream>
#include <string>
using namespace std;

int main()
{
	struct pizza
	{
		string cmp_name;
		int piz_dia;
		float piz_wgt;
	}piz1;
	
	cout << "Entry the company name: ";
	getline(cin,piz1.cmp_name);
	cout << "Entry the pizza's diameter: ";
	cin >> piz1.piz_dia;
	cout << "Entry the pizza's weight: ";
	cin >> piz1.piz_wgt;

	cout << "Company name: " << piz1.cmp_name << endl;
	cout << "pizza's dimaeter: " << piz1.piz_dia <<endl;
	cout << "pizza's weight: " << piz1.piz_wgt << endl;

	return 0;
}
