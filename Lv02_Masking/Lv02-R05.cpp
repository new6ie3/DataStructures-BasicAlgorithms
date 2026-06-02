#include <iostream>

using namespace std;

bool mask[6] = { 1, 0, 1, 0, 1, 0 };

int MaskingMinIndex(int* arr)
{
	int minIdx = INT_MAX;
	for (int i = 0; i < 6; ++i)
	{
		if (mask[i] && minIdx > arr[i])
		{
			minIdx = i;
		}
	}

	return minIdx;
}

int main()
{
	int arr[6];
	for (int i = 0; i < 6; ++i)
		cin >> arr[i];

	int index = MaskingMinIndex(arr);
	cout << "arr[" << index << "]=" << arr[index];

	return 0;
}