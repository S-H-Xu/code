#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int ArrSize = 50;
	char arr[ArrSize];

	ofstream outFile;
	outFile.open("tmpfile.txt");

	cout << "Enter the words which you want to save(enter @ to exit): ";
	while(cin.getline(arr,50), arr[0] != '@')
	{
		outFile << arr << endl;
	}
	outFile.close();

	ifstream inFile;
	inFile.open("tmpfile.txt");
	if(!inFile.is_open())
	{
		exit(EXIT_FAILURE);
	}

	char ch;
	int count = 0;

	while(inFile.get(ch), inFile.good())
	{
		count++;
	}
	inFile.close();

	cout << "the number of character in tmpfile.txt is: " << count << "\n";

	return 0;
}
