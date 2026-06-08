#include <iostream>

using namespace std;

int map[5][5] =
{
	3, 3, 5, 3, 1,
	2, 2, 4, 2, 6,
	4, 9, 2, 3, 4,
	1, 1, 1, 1, 1,
	3, 3, 5, 9, 2
};

int dir[4][2] =
{
	-1, 1,	// 좌하단
	-1, -1,	// 좌상단
	1, 1,	// 우하단
	1, -1	// 우상단
};

int Sum(int dy, int dx)
{
	int sum = 0;
	for (int i = 0; i < 4; ++i)
	{
		int newX = dx + dir[i][0];
		int newY = dy + dir[i][1];

		if(newX > -1 && newX < 5 && newY > -1 && newY < 5)
		sum += map[newY][newX];
	}

	return sum;
}

int main()
{
	int max = INT_MIN;
	int mx, my;
	for (int y = 0; y < 5; ++y)
	{
		for (int x = 0; x < 5; ++x)
		{
			int sum = Sum(y, x);
			if (max < sum)
			{
				max = sum;
				mx = x;
				my = y;
			}
		}
	}
	cout << my << ' ' << mx << endl;

	return 0;
}