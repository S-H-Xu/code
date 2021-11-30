#include "test1_f.h"
#include <iostream>
#include <cstring>

int main()
{
	Stack s1;
	customer c;

	if(s1.isempty())
	{
		std::cout << "stack s1 is empty!" << std::endl;
	}

	while(!s1.isfull())
	{
		std::cout << "plese enter fullname(end with 'quit'): ";
		std::cin >> c.fullname;
		if(!strcmp(c.fullname, "quit"))
			break;
		std::cout << "plese enter payment: ";
		std::cin >> c.payment;
		if(s1.push(c))
			std::cout << "push data completed!" << std::endl;
		else
			std::cout << "push data false!" << std::endl;
	
	}
	
	if(!s1.isempty())
		std::cout << "there are some data in stack:" << std::endl;

	while(!s1.isempty())
	{
		customer temp;
		if(s1.pop(temp))
		{
			std::cout << "fullname: " << temp.fullname << std::endl;
			std::cout << "payment: " << temp.payment << std::endl;
			std::cout << std::endl;
		}
		else
			std::cout << "read data false!" << std::endl;
	}

	if(s1.isempty())
		std::cout << "stack s1 is empty!" << std::endl;

	return 0;
}
