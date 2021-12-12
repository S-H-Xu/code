//cd.h-use new
#ifndef __CD_H__
#define __CD_H__

class Cd
{
	private:
		char* performers;
		char* label;
		int selections;
		double playtime;
	public:
		Cd(char* sl, char* s2, int n, double x);
		Cd(const Cd& d);
		Cd();
		virtual ~Cd();
		virtual void Report() const;
		virtual Cd& operator=(const Cd& d);
};

#endif
