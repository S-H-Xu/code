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
		static const int CINLIM = 80;
	public:
		String(const char* s);
		String();
		String(const String& st);
		~String();

		int length() const {return len;}
		char& operator[](int);
		const char& operator[](int i) const;
		String& operator=(const String& st);
		String& operator=(const char* s);
		String operator+(String& st);
		String operator+(const char* s);
	
		void stringup();
		void stringlow();
		int has(const char ch) const;
	
		static int HowMany();
		
		friend String operator+(const char* s, String& st);
		friend bool operator<(const String& st1, const String& st2);
		friend bool operator>(const String& st1, const String& st2);
		friend bool operator==(const String& st1, const String& st2);
		friend std::istream& operator>>(std::istream& is, String& st);
		friend std::ostream& operator<<(std::ostream& os, String& st);
};

#endif
