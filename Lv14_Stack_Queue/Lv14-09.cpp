#include <iostream>

using namespace std;

int ary[4][4] =
{
	3, 5, 1, 4,
	2, 2, 1, 1,
	0, 1, 2, 3,
	3, 1, 3, 1,
};

int main()
{
	char ch;
	cin >> ch;

	for (size_t y = 0; y < 4; ++y)
	{
		for (size_t x = 0; x < 4; ++x)
		{
			if (y == ch - '0')
				cout << ary[y][x];

			if (x == ch - 'A')
				cout << ary[y][x];
		}
	}

	return 0;
}