#include <iostream>
#include <cstring>
#include "golf.h"

using namespace std;

void setgolf(golf& g, const char* name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;	

}

int setgolf(golf& g)
{
	cin.getline(g.fullname, Len);

	if(g.fullname[0])
		return 1;
	else
		return 0;
}

void handicap(golf& g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf& g)
{
	cout << "fullname: " << g.fullname << "   " << "handicap: " << g.handicap;
	cout << endl;
}
