#define _CRT_SECURE_NO_WARNINGS 1
//emp.cpp
#include "emp.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void abstr_emp::ShowAll() const
{
	cout << "firstname: " << fname << endl;
	cout << "lastname: " << lname << endl;
	cout << "job: " << job << endl;
}

void abstr_emp::SetAll()
{
	cout << "Enter firstname: ";
	cin >> fname;
	cout << "Enter lastname: ";
	cin >> lname;
	cout << "Enter job: ";
	cin >> job;
}

void employee::ShowAll() const
{
	abstr_emp::ShowAll();
}

void employee::SetAll()
{
	abstr_emp::SetAll();
}

void manager::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "abstr_emps: " << InchargeOf() << endl;
}

void manager::SetAll()
{
	abstr_emp::SetAll();
	cout << "Enter number of abstr_emps managed: ";
	cin >> InchargeOf();
}

void fink::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "Reports to: " << ReportsTo() << endl;
}

void fink::SetAll()
{
	abstr_emp::SetAll();
	cout << "Reports to: ";
	cin >> ReportsTo();
}

void highfink::ShowAll() const
{
	abstr_emp::ShowAll();
	cout << "abstr_emps: " << manager::InchargeOf() << endl;
	cout << "Reports to: " << fink::ReportsTo() << endl;
}

void highfink::SetAll()
{
	abstr_emp::SetAll();
	cout << "Enter number of abstr_emps managed: ";
	cin >> InchargeOf();
	cout << "Reports to: ";
	cin >> ReportsTo();
}

std::ostream& operator<<(std::ostream& os, abstr_emp& e)
{
	e.ShowAll();
	return os;
}