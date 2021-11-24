#include <iostream>
#include <string>

using namespace std;

void Print(string , int n = 0);

int main()
{
	int n = 0;
	string str;

	cin >> str;

	Print(str);
	cout << endl;
	Print(str, 0);
	cout << endl;
	Print(str, 1);
	cout << endl;
	Print(str, 2);
	cout << endl;
	Print(str, 2);
	cout << endl;
	Print(str, -1);

	return 0;
}

//print str once
//when n not zero
//the times of print str is equal to  the function be used  
void Print(string str, int n) 
{
	static int count = 0;
	count++;
	if(n)
	{
		for(int i = 0; i < count; i++)
			cout << str;
	}
	else
		cout << str;
	

}

