#include <iostream>

using namespace std;

int image[4][4];

int dir[6][2] =
{
	0, 0,
	0, 1,
	0, 2,
	1, 0,
	1, 1,
	1, 2,
};

int rectSum(int y, int x)
{
	int sum = 0;
	for (int i = 0; i < 6; ++i)
	{
		int newY = y + dir[i][0];
		int newX = x + dir[i][1];

		if(newX > -1 && newX < 4 && newY > -1 && newY < 4)
		sum += image[newY][newX];
	}

	return sum;
}

int main()
{
	for (int i = 0; i < 16; ++i)
		cin >> image[i / 4][i % 4];

	int max = INT_MIN;
	int mx, my;
	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			int sum = rectSum(y, x);
			if (max < sum)
			{
				max = sum;
				my = y;
				mx = x;
			}
		}
	}

	cout <<  '(' << my << ',' << mx  << ')' << endl;

	return 0;
}