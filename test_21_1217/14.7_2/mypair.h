//mypair.h
#ifndef __MYPAIR_H__
#define __MYPAIR_H__
#include <iostream>
#include <string>

template<class T1, class T2>
class Pair
{
	private:
		T1 a;
		T2 b;
	public:
		T1& first() { return a;}
		T2& second() { return b;}
		T1 first() const;
		T2 second() const;
		Pair(const T1& aval, const T2& bval) : a(aval), b(bval) {}
		Pair(const Pair<T1, T2>& p);
		Pair() {}
};

template<class T1, class T2>
Pair<T1, T2>::Pair(const Pair<T1, T2>& p)
{
	a = p.a;
	b = p.b;
}

template<class T1, class T2>
T1 Pair<T1, T2>::first() const
{
	return a;
}

template<class T1, class T2>
T2 Pair<T1, T2>::second() const
{
	return b;
}

#endif
