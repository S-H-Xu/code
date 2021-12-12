//cd.cpp
#include <iostream>
#include "cd.h"
#include <cstring>

Cd::Cd() {}

Cd::Cd(char* s1, char* s2, int n, double x)
{
	std::strcpy(performers, s1);
	std::strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd& d)
{
	std::strcpy(performers, d.performers);
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::~Cd() {}

void Cd::Report() const
{
	std::cout << "performers: " << performers << std::endl;
	std::cout << "label: " << label << std::endl;
	std::cout << "selections: " << selections << std::endl;
	std::cout << "playtime: " << playtime << std::endl;
}

Cd& Cd::operator=(const Cd& d)
{
	if(this == &d)
		return *this;
	
	std::strcpy(performers, d.performers);
	std::strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	
	return *this;
}
