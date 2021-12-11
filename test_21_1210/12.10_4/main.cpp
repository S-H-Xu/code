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

	Item i = 0;
	while(!s1.isfull())
	{
		s1.push(i++);
	}
	Stack s3(s1);

	while(!s2.isfull())
        {
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

	cout << "s3: " << endl;
	while(!s3.isempty())
	{
		Item temp;
		s3.pop(temp);
		cout << temp << endl;
	}

	return 0;
}
