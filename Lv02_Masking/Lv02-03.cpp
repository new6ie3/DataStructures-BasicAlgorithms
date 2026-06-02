#include <iostream>

using namespace std;

int OffsetRight(int* arr, int index, int target)
{
	int count = 0;
	for (int i = index; i < 7; ++i)
	{
		if (target == arr[i])
			return count;

		count++;
	}

	return -1;
}

int main()
{
	int arr[7] = { 5, 9, 4, 6, 1, 5, 8 };
	int idx, target;

	cin >> idx >> target;

	int result = OffsetRight(arr, idx, target);

	if (result != -1)
		cout << result << endl;
	else
		cout << "X" << endl;

	return 0;
}