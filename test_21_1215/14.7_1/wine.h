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

class Wine
{
	private:
		std::string label;
		PairArray data;
		int years;//years number
	public:
		Wine();
		Wine(const char* l, int y, const int yr[], const int bot[]);
		Wine(const char* l, int y );
		void GetBottles();
		std::string& Label() { return label;}
		int sum() const;
		void Show() const;
};

#endif
