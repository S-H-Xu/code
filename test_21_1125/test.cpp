#include <iostream>

using namespace std;

template <class T>
T maxn(const T *);

int main()
{
	int arr[5] = {};

	for(int i = 0; i < 5; i++)
		cin >> arr[i];
	int max = maxn(arr);
	cout << "Max = " << max << endl;

	return 0;
}

template <class T>
T maxn(const T* arr)
{
	T temp = arr[0];
	for(int i = 1; i < 5; i++)
		temp = temp > arr[i] ? temp : arr[i];

	return temp;	
}
