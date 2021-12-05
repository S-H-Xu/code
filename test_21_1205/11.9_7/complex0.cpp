#include "complex0.h"
#include <iostream>

namespace COMPLEX
{
	using namespace std;

	Complex::Complex()
	{
		real = imag = 0.0;
	}

	Complex::Complex(const double A, const double B)
	{
		real = A;
		imag = B;
	}
	
	void Complex::Show() const
	{
		cout << "(" << real << ", " << imag << "i)" << endl;	
	}	

	Complex Complex::operator+(const Complex& cmp)
	{
		return Complex(real+cmp.real, imag+cmp.imag);
	}

	Complex Complex::operator-(const Complex& cmp)
	{
		return Complex(real-cmp.real, imag-cmp.imag);
	}

	Complex Complex::operator*(const Complex& cmp)
	{
		return Complex(real*cmp.real-imag*cmp.imag, real*cmp.imag+imag*cmp.real);
	}

	Complex Complex::operator*(const double x)
	{
		return Complex(real*x, imag*x);
	}

	Complex operator~(const Complex& cmp)
	{
		return Complex(cmp.real, -cmp.imag);
	}

	Complex operator*(const double x, Complex& cmp)
	{
		return cmp*x;
	}

	std::ostream& operator<<(std::ostream& os, const Complex& cmp)
	{
		cmp.Show();
		return os;
	}

	int operator>>(std::istream& is, Complex& cmp)
	{
		cout << "Enter the real number : ";
		is >> cmp.real;
		if(!is)
			return 0;

		cout << "Enter the imaginary number: ";
		is >> cmp.imag;
		if(!is)
			return 0;
		return 1;
	}
}
