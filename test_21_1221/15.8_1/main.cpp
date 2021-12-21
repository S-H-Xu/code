#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include "tvrm.h"
using namespace std;

int main()
{
	Tv t1;
	Tv t2;
	Remote r1;
	Remote r2;

	cout << "t1, r1:\n";
	t1.settings();
	t1.onoff();
	t1.volup();
	t1.chandown();
	r1.set_chan(t1, 20);
	r1.Show_cmode();
	r1.set_cmode();
	r1.Show_cmode();
	t1.set_cmode(r1);
	r1.Show_cmode();

	cout << "t2, r2:\n";
	r2.Show_cmode();
	t2.set_cmode(r2);
	r2.onoff(t2);
	t2.set_cmode(r2);
	r2.Show_cmode();
	
	return 0;
}