#include <iostream>
#include "test_f.h"

int main()
{
	using namespace std;

	Move m1, m2, m3;
	double a, b;
	cout << "init m1:\n";
	cout << "x = ";
	cin >> a;
	cout << "y = ";
	cin >> b;
	m1.reset(a, b);

  	cout << "init m2:\n";
        cout << "x = ";
        cin >> a;
        cout << "y = ";
        cin >> b;
        m2.reset(a, b);
	cout << endl;

	cout << "m1:\n";
	m1.showmove();
	cout << endl;
	cout << "m2:\n";
	m2.showmove();
	cout << "m1 + m2 : \n";
	m3 = m1.add(m2);
	m3.showmove();
	cout << endl;

	return 0;
}

