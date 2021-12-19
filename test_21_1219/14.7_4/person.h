//person.h
#ifndef __PERSON_H__
#define __PERSON_H__
#include <string>

using std::string;

class Person
{
private:
	string lastname;
	string firstname;
public:
	Person() {}
	Person(const char* ln, const char* fn) : lastname(ln), firstname(fn) {}
	Person(Person& p);
	virtual ~Person() {};
	virtual void Show() const;
};

class Gunslmger : virtual public Person
{
private:
	int num;
public:
	Gunslmger(int n = 0) : Person(), num(n) {}
	Gunslmger(const char* ln, const char* fn, int n = 0) :
		Person(ln, fn), num(n) {}
	Gunslmger(Gunslmger& g) : Person(g), num(g.num) {}
	~Gunslmger() {}
	void Show() const;
	double Draw() const { return 3.14; }//Time to draw the gun
};

class PokerPlayer : virtual public Person
{
public:
	PokerPlayer() : Person() {}
	PokerPlayer(const char* ln, const char* fn) : Person(ln, fn) {}
	PokerPlayer(PokerPlayer& p) : Person(p) {}
	~PokerPlayer() {}
	int Draw() const;
};

class BadDude : public Gunslmger, public PokerPlayer
{
public:
	BadDude() : Gunslmger(), PokerPlayer() {}
	BadDude(const char* ln, const char* fn) : Person(ln, fn), Gunslmger(ln,fn), PokerPlayer(ln, fn) {}
	BadDude(BadDude& b) : Person(b), Gunslmger(b), PokerPlayer(b) {}
	~BadDude() {}
	double Gdraw() const { return 2.14; }//Time to draw the gun
	int Cdraw() const;
	void Show() const;
};


#endif