#include <iostream>

using namespace std;

int arr[3][4] =
{
	3, 4, 1, 5,
	3, 4, 1, 3,
	5, 2, 3, 6
};

int sum[4] = {};

int main()
{
	for (size_t y = 0; y < 3; ++y)
	{
		for (size_t x = 0; x < 4; ++x)
		{
			sum[x] += arr[y][x];
		}
	}

	int index;
	cin >> index;

	cout << sum[index];

	return 0;
}