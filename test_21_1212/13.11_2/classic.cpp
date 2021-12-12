//classic.cpp
#include "classic.h"
#include <cstring>
#include <iostream>

Classic::Classic() : Cd()
{
	masterpiece = nullptr;
}

Classic::Classic(char* s, char* s1, char* s2, int n, double x) 
	:Cd(s1, s2, n, x)
{
	masterpiece = new char[std::strlen(s) + 1];
	std::strcpy(masterpiece, s);	
}

Classic::Classic(const Classic& cl) :Cd(cl)
{
	masterpiece = new char[std::strlen(cl.masterpiece) + 1];
	std::strcpy(masterpiece, cl.masterpiece);
}

Classic::~Classic()
{
	delete[] masterpiece;
}

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
	delete[] masterpiece;
	masterpiece = new char[std::strlen(cl.masterpiece) + 1];
	std::strcpy(masterpiece, cl.masterpiece);
	return *this;
}
