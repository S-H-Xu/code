#include <iostream>
#include <string>

using namespace std;

void toggle_case(string &);

int main()
{
	string str;
	
	cout << "Enter a string (q to quit): ";
	getline(cin, str);
	while(str != "q")
	{	
		toggle_case(str);
		cout << str << endl;

		cout << "Next string (q to quit): ";
		getline(cin, str);
	}
	
	cout << "Bye\n";
	
	return 0;
}

void toggle_case(string &st)
{
	char* p = (char*)&st;

	while(*p)
	{
		*p = toupper(*p);
		p++;
	}
}
