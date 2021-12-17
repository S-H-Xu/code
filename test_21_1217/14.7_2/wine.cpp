//wine.cpp
#include <iostream>
#include "wine.h"

using namespace std;

Wine::Wine() : string("none"), years(0), PairArray(ArrayInt(0), ArrayInt(0)) {}

Wine::Wine(const char* l, int y, const int yr[], const int bot[]) : string(l), years(y),
	PairArray(ArrayInt(yr,y),ArrayInt(bot,y)) {}
Wine::Wine(const char* l, int y) : string(l), years(y), PairArray(ArrayInt(y), ArrayInt(y)) {}

void Wine::GetBottles()
{
	int yrs, bots;
	cout << "Enter years and bottles\n";
	for (int i = 0; i < years; i++)
	{
		cout << "Enter years: ";
		cin >> yrs;
		cout << "Enter bottles of this year: ";
		cin >> bots;
		first()[i] = yrs;
		second()[i] = bots;
	}
}

int Wine::sum() const
{
	/*int sum = 0;
	for (int i = 0; i < years; i++)
		sum += data.second()[i];
	return sum;*/
	return second().sum();
}

void Wine::Show() const
{
	cout << "Wine: " << (const string&)*this << endl;
	cout << "	" << "Year" << "	" << "Bottles\n";
	for (int i = 0; i < years; i++)
		cout << "	" << first()[i] << "	" << second()[i] << endl;
}
