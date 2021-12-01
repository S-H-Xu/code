#include "test1_f.h"
#include <iostream>

List::List(){count = 0;}

bool List::isempty() const
{
	if(count == 0)
		return true;
	else
		return false;	
}

bool List::isfull() const
{
	if(count == Max)
		return true;
	else
		return false;
}

bool List::add(const Unit& u)
{
	if(count < Max)
	{
		list[count] = u;
		count++;
		return true;
	}
	else
		return false;
}

//void List::visit(void (*pf)(Unit& u))
//{
	//

//}
//

void List::show(int i)
{
	using namespace std;
	cout << "name: " << list[i].name << endl;
	cout << "age: " << list[i].age << endl;
	cout << "tel: " << list[i].tel << endl;
}

int List::listnumber() const
{
	return count;
}
