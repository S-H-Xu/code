//cow.h
#ifndef __COW_H__
#define __COW_H__

class Cow
{
	char name[20];
	char* hobby;//what's means?
	double weight;
	public:
	Cow();
	Cow(const char* nm, const char* ho, double wt);
	Cow(const Cow& c);
	~Cow();
	Cow& operator=(const Cow& c);
	void ShowCow() const;
};

#endif
