#include <iostream>
#include <string>
using namespace std;

int main()
{
	string first_name;
	string last_name;
	int age = 0;
	char grade;

	cout << "What is your first name?" << endl;
	getline(cin,first_name);
	cout << "What is your last name?" << endl;
	getline(cin,last_name);
	cout << "What letter grade do you deserve?" << endl;
	cin >> grade;
	cout << "What is your age?" << endl;
	cin >> age;
	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << (char)(grade + 1) << endl;
	return 0;
}
