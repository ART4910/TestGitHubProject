#include <iostream>

using namespace std;

int main()
{
	int arr[] = { 2, 5, 3, 5, 6, 4, 6, 9, 54, 74, 34, 5, 0 };
	int maxEl = arr[0];

	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++)
	{
		if (maxEl < arr[i])
		{
			maxEl = arr[i];
		}
	}

	cout << maxEl << endl;
	return 0;
}	