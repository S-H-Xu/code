#include <iostream>
#include "golf.h"

using namespace std;

int main()
{
	const int Max = 5;
	int count = Max;
	golf list[Max];
	
	while(count)
	{
		cout << "Please enter name " << Max - count + 1
			<< " (quit with empty)" << ":";
		if(int i = setgolf(list[Max - count]))
		{
			int hc = 0;
			cout << "Please enter handicap: ";
			cin >> hc;
			cin.get();
			handicap(list[Max - count], hc);
			count--;
		}
		else
			break;
	}

	for(int i = 0; i < Max; i++)
	{
		if(list[i].fullname[0])
			showgolf(list[i]);
		else
			break;
	}

	return 0;
}
