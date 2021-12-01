#include "test_f.h"
#include <iostream>

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	std::cout << "x = " << x << ", " << "y = " << y << ";\n";
}


Move Move::add(const Move& m) const
{
	Move temp {x + m.x, y + m.y};
	return temp;	
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
