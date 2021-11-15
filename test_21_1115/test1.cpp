#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{
	int i = 0;
	int n = 0;
	cin >> n;
	const int z = n;
	vector<int> arr(n);
	//array<int,z> arr;
	for(i=0;i<n;i++)
	{
		arr[i]=i;
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}

	return 0;
}
