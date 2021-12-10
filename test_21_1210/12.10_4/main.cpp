//mian.cpp
#include <iostream>
#include "stack.h"

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	Stack s1;
	Stack s2(5);
	Stack s3(s1);

	while(!s1.isfull())
	{
		Item i = 0;
		s1.push(i++);
	}

	while(!s2.isfull())
        {
                Item i = 10;
                s2.push(i++);
        }

	cout << "s1: " << endl;
	while(!s1.isempty())
	{
		Item temp;
		s1.pop(temp);
		cout << temp << endl;
	}

	cout << "s2: "<< endl;
	while(!s2.isempty())
        {
                Item temp;
                s2.pop(temp);
                cout << temp << endl;
        }

	s2 = s3;
	cout << "set: s2 = s3, now s2: " << endl;
	while(!s2.isempty())
        {
                Item temp;
                s2.pop(temp);
                cout << temp << endl;
        }

	return 0;
}