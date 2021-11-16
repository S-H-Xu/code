#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count = 0;
	string str;
	string stop = "done";
	cout << "entry words( to stop, type the word done): ";

	do
	{
		cin >> str;
		count++;
	}while(str != stop);

	cout << "You entered a total of " << (count-1) << " words" << endl;

	return 0;
}
