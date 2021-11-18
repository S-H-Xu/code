#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	char ch;
	
	cout << "please enter: ";
	while(cin.get(ch) && ch != '@')
	{
		if(isalpha(ch))
		{
			if(ch > 'Z')
			{
				ch = toupper(ch);
				cout << ch << endl;
			}
			else
			{
				ch = tolower(ch);
				cout << ch << endl;
			}
		}
	}
	return 0;
}
