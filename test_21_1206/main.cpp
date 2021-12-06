#include "cow.h"
#include <iostream>

int main()
{
	using namespace std;
	{
		Cow c1;
		Cow c2 = Cow("name2", "hobby2", 30.0);
		Cow c3 ("name3", "hobby3", 60.0);
		Cow c4 (c3);
		
		cout << "c1:\n";
		c1.ShowCow();
		cout << "c2:\n";
		c2.ShowCow();
		cout << "c3:\n";
		c3.ShowCow();
		cout << "c4:\n";
		c4.ShowCow();

		c3 = c2;
		cout << "Now, c3:\n";
		c3.ShowCow();

		return 0;
	}
}
