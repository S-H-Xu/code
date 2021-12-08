//string2.cpp
#include <iostream>
#include "string2.h"
#include <cstring>
#include <cctype>

using namespace std;

int String::num_strings = 0;

String::String()
{
	len = 0;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::String(const char* s)
{
	len =  strlen(s);
	str = new char[len + 1];
	strcpy(str, s);
	num_strings++;
//	cout << num_strings << ": \"" << str <<"\" object created\n";
}

String::String(const String& st)
{
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	num_strings++;
}

String::~String()
{
//	cout << "\"" << str << "\" object deleted, ";
	--num_strings;
//	cout << num_strings << " left\n";
	delete[] str;
}

char& String::operator[](int i)
{
	return str[i];
}

const char& String::operator[](int i) const
{
	return str[i];
}

String& String::operator=(const String& st)
{
	if(this == &st)
		return *this;
	delete[] str;
	len = st.len;
	str = new char[len + 1];
	strcpy(str, st.str);
	return *this;
}

String& String::operator=(const char* s)
{
	String temp (s);
	*this = temp;
	return *this;
}

void String::stringup()
{
	for(int i = 0; i < len ; i++)
	{
		if(!str[i])
			break;
		str[i] = isupper(str[i]);
	}
}

void String::stringlow()
{
	for(int i = 0; i < len; i++)
	{	
		if(!str[i])
			break;
		str[i] = islower(str[i]);
	}
}

int String::has(const char ch) const
{
	int count = 0;
	for(int i = 0; i < len; i++)
	{	
		if(ch == str[i])
			count++;
	}
	return count;
}

int String::HowMany()
{
	return num_strings;
}

String& String::operator+(String& st)
{
	char temp[len + 1];
	strcpy(temp, str);
	delete[] str;
	str = new char[len + st.len + 1];
	strcpy(str, temp);
	strcpy(&str[len+1], st.str);
	len += st.len;
	return *this;
}

String& String::operator+(const char* s)
{
	String S(s);
	return *this + S;
}

String& operator+(const char* s , String& st)
{
	return st + s;
}

bool operator<(const String& st1, const String& st2)
{
	if(strcmp(st1.str, st2.str)<0)
		return true;
	else
		return false;
}

bool operator>(const String& st1, const String& st2)
{
	if(strcmp(st1.str, st2.str)>0)
		return true;
	else
		return false;
}

bool operator==(const String& st1, const String& st2)
{
	if(strcmp(st1.str, st2.str)==0)
		return true;
	else
		return false;
}

std::istream& operator >>(std::istream& is, String& st)
{
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if(is)
	{
		delete[] st.str;
		st.len = strlen(temp);
		st.str = new char[st.len + 1];
		strcpy(st.str, temp);
	}
	while(is && is.get() != '\n')
		continue;
	return is;
}

std::ostream& operator <<(std::ostream& os, String& st)
{
	os << st.str;
	return os;
}


