#ifndef __TEST1_F_H__
#define __TEST1_F_H__
#include <string>
#define Max 10

struct Unit
{
	char name[20];
	int age;
	std::string tel;
};

class List
{
	private:
		Unit list[Max];
		int count;
	public:
		List();
		bool add(const Unit& u);
		bool isempty() const;
		bool isfull() const;
	//	void visit(void (*pf)(Unit& u));
		void show(int i);
		int listnumber() const;
};

#endif
