#include <iostream>

using namespace std;

char mfloor[4][4] =
{
	'_','_','_','_',
	'_','_','_','_',
	'_','_','_','_',
	'_','_','_','_',
};

void Bulid(size_t dy, size_t dx)
{
	int dir[8][2] =
	{
		+0, +1,
		+0, -1,
		+1, +0,
		+1, -1,
		+1, +1,
		-1, +0,
		-1, -1,
		-1, +1,
	};

	mfloor[dy][dx] = '#';
	
	for (size_t i = 0; i < 8; ++i)
	{
		size_t newY = dy + dir[i][0];
		size_t newX = dx + dir[i][1];

		if (newY >= 4 || newY < 0 || newX >= 4 || newX < 0)
			continue;

		mfloor[newY][newX] = '@';
	}
}

void Print()
{
	for (size_t y = 0; y < 4; ++y)
	{
		for (size_t x = 0; x < 4; ++x)
		{
			cout << mfloor[y][x];
		}
		cout << endl;
	}
}

int main()
{
	for (size_t i = 0; i < 3; ++i)
	{
		int y, x;
		cin >> y >> x;

		Bulid(y, x);
	}

	Print();

	return 0;
}