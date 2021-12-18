#include "queuetp.h"
#include <iostream>
#include "worker.h"
#include <string>

int main()
{
	using std::cout;
	using std::endl;

	QueueTp<Worker> list1;
	QueueTp<Worker> list2(3);
	QueueTp<Worker> list3(list1);
	Worker temp;
	int i = 1;
	std::string test = "test";

	while(!list1.isfull())
	{
		temp.Set(test, i);
		list1.push(temp);
		++i;
	}

	while(!list2.isfull())
	{
		temp.Set(test, i);
		list2.push(temp);
		++i;
	}

	while(!list3.isfull())
	{
		temp.Set(test, i);
		list3.push(temp);
		++i;
	}
	
	cout << "list1:\n";
	while(!list1.isempty())
	{
		Worker temp;
		list1.pop(temp);
		temp.Show();
		cout << endl;
	}
	
	while(!list2.isempty())
	{
		Worker temp;
		list2.pop(temp);
		temp.Show();
		cout << endl;
	}

	cout << "list2 = list3, now list2:\n";
	list2 = list3;
	while(!list2.isempty())
	{
		Worker temp;
		list2.pop(temp);
		temp.Show();
		cout <<endl;
	}

	return 0;
}
