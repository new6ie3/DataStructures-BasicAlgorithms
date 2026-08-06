#include <iostream>

using namespace std;

bool ant_ary[4][4] =
{
	1, 0, 0, 0,
	0, 0, 0, 1,
	0, 0, 0, 1,
	0, 1, 0, 0
};

int dir[4][2]
{
	{+0, -1},
	{+0, +1},
	{-1, +0},
	{-1, +0},
};

bool Result(size_t dy, size_t dx)
{
	for (size_t i = 0; i < 4; ++i)
	{
		size_t newY = dy + dir[i][0];
		size_t newX = dy + dir[i][1];

		if (newY >= 4 || newY < 0 || newX >= 4 || newX < 0)
			continue;
		
		if (ant_ary[newY][newX])
			return false;
	}

	return true;
}

int main()
{
	for (size_t y = 0; y < 4; ++y)
	{
		for (size_t x = 0; x < 4; ++x)
		{
			bool result = Result(y, x);
			if (result == false)
			{
				cout << "위험한 상태";
				return 0;
			}
		}
	}

	cout << "안전한 상태";

	return 0;
}