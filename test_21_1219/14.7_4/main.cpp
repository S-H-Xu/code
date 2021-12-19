#define _CRT_SECURE_NO_WARNINGS 1
#include "person.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(nullptr));
	Person p1("zhang", "san");
	PokerPlayer pk1("li", "si");
	Gunslmger g1("wang", "wu", 10);
	BadDude b1("wang", "ermazi");
	
	cout << "p1, pk1, g1, b1:\n";
	p1.Show();
	pk1.Show();
	g1.Show();
	b1.Show();

	cout << "card:\n";
	cout << "pk1 card: " << pk1.Draw() << endl;
	cout << "b1 card: " << b1.Cdraw() << endl;

	return 0;
}