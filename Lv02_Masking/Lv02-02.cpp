#include <iostream>

using namespace std;

int Masking(int(*arr)[3], bool (*bit)[3])
{
	int sum = 0;
	for (int i = 0; i < 9; ++i)
	{
		if (bit[i / 3][i % 3] == 1)
		{
			sum += arr[i / 3][i % 3];
		}
	}

	return sum;
}

int main()
{
	int arr[3][3] =
	{
		3, 5, 9,
		4, 2, 1,
		1, 1, 5
	};

	bool bit[3][3];
	for (int i = 0; i < 9; ++i)
		cin >> bit[i / 3][i % 3];

	int result = Masking(arr, bit);
	cout << result << endl;

	return 0;
}