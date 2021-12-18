//worker.h
#ifndef __WORKER_H__
#define __WORKER_H__
#include <string>
#include <iostream>

class Worker
{
	private:
		std::string fullname;
		long id;
	public:
		Worker() : fullname("no one"), id(0L) {}
		Worker(const std::string& s, long n) : fullname(s), id(n) {}
		~Worker() {};
		void Set(const std::string& s, long n);
		void Show() const;
};

void Worker::Set(const std::string& s, long n)
{
	fullname = s;
	id = n;
}

void Worker::Show() const
{
	std::cout << "fullname: " << fullname << std::endl;
	std::cout << "ID: " << id << std::endl;
}
#endif
