//vintageport.h
#ifndef __VINTAGEPORT_H__
#define __VINTAGEPORT_H__
#include "port.h"
using namespace std;

class VintagePort : public Port
{
	private:
		char* nickname;
		int year;
	public:
		VintagePort();
		VintagePort(const char* br, int b, const char* nn, int y);
		VintagePort(const VintagePort& vp);
		~VintagePort() { delete[] nickname;}
		VintagePort& operator=(const VintagePort& vp);
		void Show() const;
		friend ostream& operator<<(ostream& os, const VintagePort& vp);
};
#endif
