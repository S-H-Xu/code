//emp.h
#ifndef __EMP_H__
#define __EMP_H__
#include <iostream>
#include <string>

class abstr_emp
{
private:
	std::string fname;//abstr_emp's first name
	std::string lname;
	std::string job;
public:
	abstr_emp() {}
	abstr_emp(const std::string& fn, const std::string& ln,
		const std::string& j) : fname(fn), lname(ln), job(j) {}
	virtual void ShowAll() const;
	virtual void SetAll();
	friend std::ostream& operator<<(std::ostream& os, abstr_emp& e);
	//virtual ~abstr_emp() = 0;//virtual base class
	virtual ~abstr_emp() {}
};

class employee : public abstr_emp
{
public:
	employee() : abstr_emp() {}
	employee(const std::string& fn, const std
		::string& ln,
		const std::string& j) : abstr_emp(fn, ln, j) {}
	virtual void ShowAll() const;
	virtual void SetAll();
};

class manager : virtual public abstr_emp
{
private:
	int inchargeof;//number of abstr_emps managed
protected:
	int InchargeOf() const { return inchargeof; }//output
	int& InchargeOf() { return inchargeof; }//input
public:
	manager(int ico = 0) : abstr_emp(), inchargeof(ico) {}
	manager(const std::string& fn, const std::string& ln,
		const std::string& j, int ico = 0) : abstr_emp(fn, ln, j), inchargeof(ico) {}
	manager(const abstr_emp& e, int ico)
		: abstr_emp(e), inchargeof(ico) {} //use abstr_emp's default copy constructor
	manager(const manager& m) : abstr_emp(m), inchargeof(m.InchargeOf()) {}
	virtual void ShowAll() const;
	virtual void SetAll();
};

class fink : virtual public abstr_emp
{
private:
	std::string reportsto;//to whom fink reports
protected:
	const std::string ReportsTo() const { return reportsto; }
	std::string& ReportsTo() { return reportsto; }
public:
	fink() : abstr_emp() {}
	fink(const std::string& fn, const std::string& ln,
		const std::string& j, const std::string& rpo) : abstr_emp(fn, ln, j), reportsto(rpo) {}
	fink(const abstr_emp& e, const std::string& rpo) : abstr_emp(e), reportsto(rpo) {}
	fink(const fink& e) : abstr_emp(e), reportsto(e.ReportsTo()) {}
	virtual void ShowAll() const;
	virtual void SetAll();
};

class highfink : public manager, public fink //management fink
{
public:
	highfink() : abstr_emp(), manager(), fink() {}
	highfink(const std::string& fn, const std::string& ln, const std::string& j, const std::string& rpo,
		int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}
	highfink(const abstr_emp& e, const std::string& rpo, int ico)
		: abstr_emp(e), manager(e, ico), fink(e, rpo) {}
	highfink(const fink& f, int ico) : abstr_emp(f), manager(f, ico), fink(f) {}
	highfink(const manager& m, const std::string& rpo)
		: abstr_emp(m), manager(m), fink(m, rpo) {}
	highfink(const highfink& h) : abstr_emp(h), manager(h), fink(h) {}
	virtual void ShowAll() const;
	virtual void SetAll();
};

#endif
