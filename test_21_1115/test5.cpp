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
	};
	
	pizza* piz = new pizza;

	cout << "Enter the pizza's diameter: ";
	cin >> piz->piz_dia;
	cout << "Enter the company name: ";
	cin.get();
	getline(cin,piz->cmp_name);
	cout << "Enter the pizza's weight: ";
	cin >> piz->piz_wgt;

	cout << "Company name: " << piz->cmp_name << endl;
	cout << "pizza's dimaeter: " << piz->piz_dia <<endl;
	cout << "pizza's weight: " << piz->piz_wgt << endl;

	delete piz;
	piz = NULL;

	return 0;
}
