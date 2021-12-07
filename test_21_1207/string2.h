//string2.h
#ifndef __STRING2_H__
#define __STRING2_H__
#include <iostream>

class String
{
	private:
		char* str;
		int len;
		static int num_strings;
	public:
		String(const char* s);
		String();
		~String();

		int length() const {return len;}
		char& operator[](int);
		const char& operator[](int i) const;
		static int HowMany();

		friend bool operator<(const String& st1, const String& st2);
		friend bool operator>(const String& st1, const String& st2);
		friend bool operator==(const String& st1, const String$ st2);
		friend operator>>(std::istream& is, String& st);
		friend std::ostream& operator<<(std::ostream& os, String& st);
};

#endif
