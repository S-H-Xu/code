#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include "exc_mean.h"

void Myerror::Show()
{
	std::cout << "v1 = " << v1 << ", " << "v2 = " << v2 << ";\n";
}

void bad_hmean::Show()
{
	std::cout << "bad_hmean::Show():\n";
	Myerror::Show();
}

void bad_gmean::Show()
{
	std::cout << "bad_gmean::Show():\n";
	Myerror::Show();
}