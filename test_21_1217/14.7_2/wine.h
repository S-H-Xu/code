//wine.h
#ifndef __WINE_H__
#define __WINE_H__
#include <iostream>
#include <string>
#include <valarray>
//#include <utility>
#include "mypair.h"
typedef std::valarray<int> ArrayInt;
//typedef std::pair<ArrayInt, ArrayInt> PairArray;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine : private std::string, private PairArray
{
	private:
		int years;//years number
	public:
		Wine();
		Wine(const char* l, int y, const int yr[], const int bot[]);
		Wine(const char* l, int y );
		void GetBottles();
		const std::string& Label() { return (const std::string&)*this;}
		int sum() const;
		void Show() const;
};

#endif
