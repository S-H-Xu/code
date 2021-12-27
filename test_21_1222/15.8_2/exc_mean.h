//exc_mean.h
#ifndef __EXC_MEAN_H__
#define __EXC_MEAN_H__
#include <stdexcept>

class bad_hmean : public std::logic_error
{
private:
	double v1;
	double v2;
public:
	bad_hmean(double a = 0, double b = 0) :
	       	logic_error("invalid arguments: a = -b"), v1(a), v2(b) {}
	//void mesg();
};

/*
inline void bad_hmean::what()
{
	std::cout << "hmean(" << v1 << ", " << v2 << "): "
		<< "invalid arguments: a = -b\n";
}
*/

class bad_gmean : public std::logic_error
{
public:
	double v1;
	double v2;
	bad_gmean(double a = 0, double b = 0) :
	       logic_error("gmean() arguments should be >= 0"), v1(a), v2(b) {}
	//const char* mesg();
};

/*
inline const char* bad_gmean::what()
{
	return "gmean() arguments should be >=0\n";
}
*/

#endif
