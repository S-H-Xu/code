//wine.cpp
#include <iostream>
#include "wine.h"

using namespace std;

Wine::Wine() : label("none"), years(0), data(ArrayInt(0), ArrayInt(0)) {}

Wine::Wine(const char* l, int y, const int yr[], const int bot[]) : label(l), years(y), data(ArrayInt(yr, y), ArrayInt(bot, y)) {}

Wine::Wine(const char* l, int y) : label(l), years(y), data(ArrayInt(y), ArrayInt(y)) {}

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
		data.first()[i] = yrs;
		data.second()[i] = bots;
	}
}

int Wine::sum() const
{
	/*int sum = 0;
	for (int i = 0; i < years; i++)
		sum += data.second()[i];
	return sum;*/
	return data.second().sum();
}

void Wine::Show() const
{
	cout << "Wine: " << label << endl;
	cout << "	" << "Year" << "	" << "Bottles\n";
	for (int i = 0; i < years; i++)
		cout << "	" << data.first()[i] << "	" << data.second()[i] << endl;
}