#include <iostream>
#include "wine.h"

using namespace std;

Wine::Wine(const char* l, int y, const int yr[], const int bot[]) : pr(*yr, *bot)
{
	label  = l;
	year = y;
}

Wine::Wine(const char* l, int y) : pr()
{
	label = l;
	year = y;
}

void Wine::GetBottles()
{
	cout << "Enter years(1998/1992/1996): ";
	cin >> pr.first;
	cout << "Enter bottles(24/48/144): ";
	cin >> pr.second;
}


