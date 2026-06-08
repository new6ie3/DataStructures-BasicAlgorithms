#include <iostream>

using namespace std;
constexpr int rows = 3;
constexpr int cols = 3;

int map[rows][cols] =
{
	3, 5, 1,
	3, 8, 1,
	1, 1, 5
};

bool bitarray[2][2] =
{
	1, 1,
	1, 0
};

int SumMaskingArray(int dy, int dx)
{
	int sum = 0;

	for (int y = 0; y < 2; ++y)
	{
		for (int x = 0; x < 2; ++x)
		{
			if (bitarray[y][x])
			{
				sum += map[dy + y][dx + x];
			}
		}
	}

	return sum;
}

int main()
{
	int max = 0;
	int mx, my;
	for (int y = 0; y < rows - 1; ++y)
	{
		for (int x = 0; x < cols - 1; ++x)
		{
			int sum = SumMaskingArray(y, x);
			if (max < sum)
			{
				max = sum;
				mx = x;
				my = y;
			}
		}
	}

	cout << '(' << my << ',' << mx << ')';

	return 0;
}