//vintageport.cpp
#include "vintageport.h"
#include <iostream>
#include <cstring>

VintagePort::VintagePort() : Port()
{
	nickname = new char[1];
	nickname[0] = '\0';
	year = -1;
}

VintagePort::VintagePort(const char* br, int b, const char* nn, int y) : Port(br, "none", b)
{
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
	year = y;
}

VintagePort::VintagePort(const VintagePort& vp) : Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}

VintagePort& VintagePort::operator=(const VintagePort& vp)
{
	if(this == &vp)
		return *this;
	(Port&)*this = (Port&)vp;
	delete[] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}

void VintagePort::Show() const
{
	Port::Show();
	cout << "Nickname: " << nickname << endl;
	cout << "Year: " << year << endl;
}

ostream& operator<<(ostream& os, const VintagePort& vp)
{
	os << (Port&)vp <<", "<< vp.nickname<<", "<< vp.year;
	return os;
}
