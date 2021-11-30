#include <iostream>
#include <string>
#include "test_f.h"

Person::Person(const std::string& ln, const char fn[])
{
        lname = ln;
        for(int i = 0; i < LIMIT; i++)
        {
                if(fn[i])
                        fname[i] = fn[i];
        }
}

void Person::Show() const
{
        using namespace std;
        cout << fname <<" " << lname;
}

void Person::FormalShow() const
{
        using namespace std;
        cout << lname << " " << fname;
}

