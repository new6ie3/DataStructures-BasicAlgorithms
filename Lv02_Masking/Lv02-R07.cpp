#include <iostream>

using namespace std;

int arr[4] = { 3, 5, 4, 2 };

int SumMaskingArray(bool *mask)
{
	int sum = 0;
	for (int i = 0; i < 4; ++i)
	{
		if (mask[i])
		{
			sum += arr[i];
		}
	}

	return sum;
}

int main()
{
	bool mask[4];
	for (int i = 0; i < 4; ++i)
		cin >> mask[i];

	int result = SumMaskingArray(mask);
	cout << result << endl;

	return 0;
}