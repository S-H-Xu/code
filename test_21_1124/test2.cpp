#include <iostream>
using namespace std;
#include <cstring>

struct stringy
{
	char* str;
	int ct;//length of string (not counting '\0')
};


void set(stringy &, char []);
void show(const stringy &, int n = 1);
void show(const char* , int n =1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	cout << "haha";

	return 0;
}

void set(stringy &by, char testing[])
{
	char* p = testing;
	by.ct = 0;
	while(*p)
	{	
		by.ct++;
		p++;
	}
	by.str = new char[by.ct + 1];
	strcpy(by.str, testing);

}

void show(const stringy &by, int n)
{
	while(n--)
	{
		cout << by.str << endl;
	}
}

void show(const char* pc, int n)
{
	while(n--)
	{
		const char* pc2 = pc;

		while(*pc2)
		{
			cout << *pc2;
			pc2++;
		}
		cout << endl;
	}
}
