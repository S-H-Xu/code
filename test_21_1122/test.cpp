#include <iostream>
using namespace std;
const int SLEN = 30;
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	
	while(cin.get() != '\n')
		continue;

	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for(int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";
	return 0;
}

int getinfo(student pa[], int n)
{
	int count = 0;
	student tmp;
	for(int i = 0; i < n; i++)
	{
		cout << "please enter fullname: ";
		cin.getline(tmp.fullname, SLEN);
		if(!tmp.fullname[0])
			break;
		cout << "please enter hobby: ";
		cin >> tmp.hobby;
		cout << "please enter ooplevel: ";
		cin >> tmp.ooplevel;
		while(cin.get() != '\n')
			continue;
		cout << endl;
		pa[i] = tmp;
		count++;
	}
	return count;
}

void display1(student st)
{
	cout << "fullname: " << st.fullname << endl;
	cout << "hobby: " << st.hobby << endl;
	cout << "ooplevel: "<< st.ooplevel << endl;
	cout << endl;
}

void display2(const student* ps)
{
	cout << "fullname: " << ps->fullname << endl;
	cout << "hobby: " << ps->hobby << endl;
	cout << "ooplevel: " << ps->ooplevel <<endl;
	cout << endl;
}

void display3(const student pa[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "fullname: " << pa[i].fullname << endl;
		cout << "hobby: " << pa[i].hobby << endl;
		cout << "ooplevel: " << pa[i].ooplevel << endl;
		cout << endl;
	}
}
