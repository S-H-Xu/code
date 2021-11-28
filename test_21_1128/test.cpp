#include <iostream>
#include <cstring>
#include <string>
using namespace std;

struct shaff
{
	char dross[20];
	int slag;
};

int main()
{
	char temp[30];
	int sl = 0;
	shaff* ps = new (temp) shaff;

	cout << "enter dorss: ";
//	cin.getline(ps->dross, 20);
	string str;
	cin >> str;
	strcpy(ps->dross, str.c_str());

//	if(!cin)
//	{
//		cin.clear();
//		while(cin.get() != '\n');
//	}
	cout << "enter slag: ";
	cin >> sl;
	ps->slag = sl;
	cout << endl;

	cout << "dorss: ";
	for(int i = 0; i < 20; i++)
	{
		if(!ps->dross[i])
			break;
		cout << ps->dross[i];
	}
	cout << endl;
	cout << "slag: " << ps->slag << endl;

	cout << "&temp[0]: " << (int*)&temp[0] << "   "
	       	<< "&temp[29]: " << (int*)&temp[29] << endl;
	cout << "&dross[0]: " << (int*)&ps->dross[0] << " "
	       	<< "&dross[19]: " << (int*)&ps->dross[19] <<endl;
	cout << "&slag: "<< &ps->slag << endl;


	return 0;
}
