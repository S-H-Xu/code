#include <iostream>
#include "test1_f.h"
#include <cstring>
int main()
{
	List L1;
	using namespace std;
	while(!L1.isfull())
	{
		Unit u;
		cout << "enter name(end with 'quit'): ";
		cin >> u.name;
		if(!strcmp(u.name, "quit"))
			break;
		cout << "enter age: ";
		cin >> u.age;
		cout << "enter tel: ";
		cin >> u.tel;
		L1.add(u);
	}

	for(int i = 0; i < L1.listnumber(); i++)
		L1.show(i);


	return 0;
}
