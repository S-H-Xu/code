#include <iostream>
#include "test_f.h"

int main()
{
	using namespace std;

	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	
	one.Show();
	cout << endl;
	one.FormalShow();
	cout << endl << endl;
	two.Show();
        cout << endl;
        two.FormalShow();
	cout << endl << endl;
	three.Show();
        cout << endl;
        three.FormalShow();
	cout << endl;

	return 0;
}
