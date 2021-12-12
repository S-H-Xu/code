//classic.cpp
#include "classic.h"
#include <cstring>
#include <iostream>

Classic::Classic() : Cd() {}

Classic::Classic(char* s, char* s1, char* s2, int n, double x) 
	:Cd(s1, s2, n, x)
{
	std::strcpy(masterpiece, s);	
}

Classic::Classic(const Classic& cl) :Cd(cl)
{
	std::strcpy(masterpiece, cl.masterpiece);
}

Classic::~Classic() {}

void Classic::Report() const
{
	Cd::Report();
	std::cout << "masterpiece: " << masterpiece << std::endl;
}

Classic& Classic::operator=(const Classic& cl)
{
	if(this == &cl)
		return *this;
	Cd::operator=(cl);
	std::strcpy(masterpiece, cl.masterpiece);
	return *this;
}
