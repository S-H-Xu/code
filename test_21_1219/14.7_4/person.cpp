//person.cpp
#define _CRT_SECURE_NO_WARNINGS 1
#include "person.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::endl;
using std::string;
using std::rand;
using std::srand;
using std::time;

Person::Person(Person& p)
{
	lastname = p.lastname;
	firstname = p.firstname;
}

void Person::Show() const
{
	cout << "lastname: " << lastname << endl;
	cout << "firstname: " << firstname << endl;
}

void Gunslmger::Show() const
{
	Person::Show();
	cout << "number of nick: " << num << endl;
	cout << "Time to draw the gun: " << Draw() << "Sec\n";
}

int PokerPlayer::Draw() const
{
	return rand() % 52 + 1;
}

int BadDude::Cdraw() const
{
	return PokerPlayer::Draw();
}

void BadDude::Show() const
{
	PokerPlayer::Person::Show();
	cout << "Time to draw the gun: " << Gdraw() << "Sec\n";
}