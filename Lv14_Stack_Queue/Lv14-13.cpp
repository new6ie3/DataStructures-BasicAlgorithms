#include <iostream>
#include <span>
using namespace std;

int aryA[3][3] =
{
	2, 6, 3,
	7, 1, 1,
	3, 4, 2,
};

int aryB[2][4] =
{
	6, 4, 2, 4,
	1, 1, 5, 8,
};

int aryC[2][3] =
{
	9, 2, 3,
	4, 2, 1,
};

int result[3][3];

void Election(span<int> s, size_t max = 3, size_t startRow = 0)
{
	size_t min = 3 - max;
	int max_vals[3] = {};
	int min_vals[3] = {9, 9, 9};

	for (int n : s)
	{
		for (size_t i = 0; i < 3; ++i)
		{
			if (max_vals[i] < n)
			{
				if (i < 2)
				{
					max_vals[i + 1] = max_vals[i];
				}
				max_vals[i] = n;
				break;
			}
		}

		for (size_t i = 0; i < 3; ++i)
		{
			if (min_vals[i] > n)
			{
				if (i < 2)
				{
					min_vals[i + 1] = min_vals[i];
				}
				min_vals[i] = n;
				break;
			}
		}
	}

	for (size_t x = 0; x < min; ++x)
		result[startRow][x] = min_vals[x];

	for (size_t x = 0; x < max; ++x)
		result[startRow][min + x] = max_vals[x];

}

int main()
{
	Election(span<int>(&aryA[0][0], 9), 3, 0);
	Election(span<int>(&aryB[0][0], 8), 0, 1);
	Election(span<int>(&aryC[0][0], 6), 1, 2);


	for (size_t y = 0; y < 3; ++y)
	{
		for (size_t x = 0; x < 3; ++x)
		{
			cout << result[y][x] << ' ';
		}
		cout << endl;
	}

	return 0;
}