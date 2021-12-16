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
		PairArray pr;
		int year;
	public:
		Wine() {}
		Wine(const char* l = "name", int y = 0, const int yr[] = 0, const int bot[] = 0);
		Wine(const char* l, int y );
		void GetBottles();
		std::string& Label() { return label;}
		int sum() {return pr.second;}
		void Show() const;
};

#endif
