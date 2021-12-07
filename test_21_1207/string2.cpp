//string2.cpp
#include <iostream>
#include "string2.h"
#include <cstring>

using namespace std;

int String::num_strings = 0;

String::String()
{
	len = 0;
	str = new char[1];
	str[0] = '\0';
}

String::String(const chat* s)
{
	len =  strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	num_strings++;
	cout << num_strings << ": \"" << str <<"\" object created\n;
}

String::~String()
{
	cout << "\"" << str << "\" object deleted, ";
	--num_strings;
	cout << num_strings << " left\n";
	delete[] str;
}
