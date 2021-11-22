#include <iostream>
#include <array>
using namespace std;

void F_In(int[], const int);
void F_Print(const int[], const int);
double F_Aver(const int[], const int);

int main()
{
	const int Max = 10;
	int golf_s[Max] = {0};

	cout << "please enter golf score（end input with -1):" <<endl;
	F_In(golf_s, Max);
	if(!cin)
	{
		cout << "please enter legal data!" <<endl;
		return 0;
	}
	F_Print(golf_s, Max);
	double aver = F_Aver(golf_s, Max);
	cout << "average = " << aver << endl;

	return 0;
}

void F_In(int golf_s[], const int Max)
{
	for(int i = 0; i < Max; i++)
	{
		cin >> golf_s[i];
		if(-1 == golf_s[i])
			break;
	}
}

void F_Print(const int golf_s[], const int Max)
{
	for(int i = 0; i < Max; i++)
	{
		if(-1 == golf_s[i])
			break;
		cout << "score " << i + 1 <<": " << golf_s[i] <<endl;
	}
}

double F_Aver(const int golf_s[], const int Max)
{
	int count = 0;
	int sum = 0;
	for(int i = 0; i < Max; i++)
	{
		if(-1 == golf_s[i])
			break;
		sum += golf_s[i];
		count++;
	}
	
	return (double)sum / count;

}
