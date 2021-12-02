#ifndef __TEST_F_H__
#define __TEST_F_H__
#include <iostream>
class Plorg
{
	private:
		char name[20];
		int CI;
	public:
		Plorg();
		Plorg(const char n[], const int ci = 50);
		void CIreset(const int ci);
		void show() const;
		friend std::ostream& operator<<(std::ostream& os, const Plorg& pl);
};

#endif
