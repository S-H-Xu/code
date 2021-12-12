//classic.h
#ifndef __CLASSIC_H__
#define __CLASSIC_H__
#include "cd.h"

class Classic :public Cd
{
	private:
		char masterpiece[50];
	public:
		Classic();
		Classic(char* s, char* s1, char* s2, int n, double x);
		Classic(const Classic& cl);
		~Classic();
		void Report() const;
		Classic& operator=(const Classic& cl);
};

#endif
