//exc_mean.h
#ifndef __EXC_MEAN_H__
#define __EXC_MEAN_H__
#include <stdexcept>

class Myerror : public std::logic_error
{
	private:
		double v1;
		double v2;
	public:
		Myerror(double a, double b, const char* s) :
			logic_error(s), v1(a), v2(b) {}
		virtual void Show();
};

class bad_hmean : public Myerror
{
public:
	bad_hmean(double a = 0, double b = 0) :
	       Myerror(a, b, "invalid arguments: a = -b") {}
	virtual void Show();
};

class bad_gmean : public Myerror
{
public:
	bad_gmean(double a = 0, double b = 0) :
	       Myerror(a, b, "gmean() arguments should be >= 0") {}
	void Show();
};

#endif
