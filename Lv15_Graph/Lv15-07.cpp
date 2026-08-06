#include <iostream>

using namespace std;

int ary[3][4] =
{
	0, 0, 0, 0,
	1, 0, 0, 0,
	1, 0, 0, 0
};

int main()
{
	for (size_t i = 0; i < 4; ++i)
		cin >> ary[0][i];

	for (size_t y = 1; y < 3; ++y)
	{
		for (size_t x = 1; x < 4; ++x)
		{
			ary[y][x] = ary[y - 1][x] + ary[y][x - 1];
		}
	}

	return 0;
}