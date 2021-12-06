#include <iostream>
#include "cow.h"
#include <cstring>

using namespace std;

Cow::Cow()
{
	strcpy(name, "default");
	hobby = new char[8];
	strcpy(hobby, "default");
	weight = 0.0;
}

Cow::Cow(const char* nm, const char* ho, double wt)
{
	strcpy(name, nm);
	int len = strlen(ho);
	hobby = new char[len + 1];
	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow& c)
{
	strcpy(name, c.name);
	int len = strlen(c.hobby);
	hobby = new char[len + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	delete[] hobby;
	hobby = nullptr;
	cout << "hobby was deleted!\n";
}

Cow& Cow::operator=(const Cow& c)
{
	strcpy(name, c.name);
        int len = strlen(c.hobby);
        hobby = new char[len + 1];
        strcpy(hobby, c.hobby);
        weight = c.weight;
	return *this;
}

void Cow::ShowCow() const
{
	cout << "name: " << name << endl;
	cout << "hobby: " << hobby << endl;
	cout << "weight: " << weight << endl;
}
