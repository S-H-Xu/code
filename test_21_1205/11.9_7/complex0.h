#ifndef __COMPLEX0_H__
#define __COMPLEX0_H__

#include <iostream>
namespace COMPLEX
{
	class Complex
	{
		private:
			double real;
			double imag;
		public:
			Complex();
			Complex(const double A, const double B);
			void Show() const;
			Complex operator+(const Complex& cmp);
			Complex operator-(const Complex& cmp);
			Complex operator*(const Complex& cmp);
			Complex operator*(const double x);
			
			friend Complex operator~(const Complex& cmp);
			friend Complex operator*(const double x, Complex& cmp);
			friend std::ostream& operator<<(std::ostream& os, const Complex& cmp);
			friend int operator>>(std::istream& is, Complex& cmp);
	};
}

#endif
