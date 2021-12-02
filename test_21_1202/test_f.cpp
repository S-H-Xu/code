#include "test_f.h"
#include <cstring>
#include <iostream>

Plorg::Plorg()
{
	strcpy(name, "Plorga");
	CI = 50;	
}

Plorg::Plorg(const char na[], const int ci)
{
	strncpy(name, na, 19);
	CI = ci;
}

void Plorg::CIreset(const int ci)
{
	CI = ci;
}

void Plorg::show() const
{
	std::cout << *this;
}

std::ostream& operator<<(std::ostream& os, const Plorg& pl)
{
	std::cout << "name: " << pl.name << std::endl;
	std::cout << "CI = " << pl.CI << std::endl;
	return os;
}
