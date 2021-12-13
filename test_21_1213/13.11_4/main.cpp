//mian.cpp
#include <iostream>
#include "vintageport.h"

using namespace std;

int main()
{
	Port p1;
	Port p2("Gallo", "twany", 20);
	Port p3(p2);
	VintagePort vp1;
	VintagePort vp2("Gallo_vp", 30, "Old Velvet", 50);
	VintagePort vp3(vp2);

	cout << "Using function Show(): \n";
	cout << "p1:\n";p1.Show();
	cout << "p2:\n";p2.Show();
	cout << "vp1:\n";vp1.Show();
	cout << "vp2:\n";vp2.Show();
	cout << endl;

	cout << "Using <<: \n";
	cout << "p1:\n" << p1 << endl;
	cout << "p2:\n" << p2 << endl;
	cout << "vp1:\n" << vp1 << endl;
	cout << "vp2:\n" << vp2 << endl;
	cout << endl;

	cout << "Testing '+=' or '-=':\n";
	cout << "p2 += 3, p2: " << (p2 += 3) << endl;
	cout << "p2 -= 10, p2 : " << (p2 -= 10) << endl;
	cout << endl;

	cout << "Testing '=':\n";
	cout << "p1 = p2, now p1 =: " << p1 << endl;
	cout << "vp1 = vp2, now vp1 =: " << vp1 << endl;

	return 0;
}
