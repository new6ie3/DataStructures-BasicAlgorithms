#include <iostream>

int mClock[3][3] =
{
	0, 12, 0,
	9, 0, 3,
	0, 6, 0,
};

void Rolling_Clock(int roll)
{
	roll %= 360;
	roll /= 90;
	
	for (int t = 0; t < roll; ++t)
	{
		for (int y = 0; y < 3; ++y)
		{
			for (int x = y; x < 3; ++x)
			{
				int temp = mClock[y][x];
				mClock[y][x] = mClock[x][y];
				mClock[x][y] = temp;
			}
		}
		int temp = mClock[1][0];
		mClock[1][0] = mClock[1][2];
		mClock[1][2] = temp;
	}


	for (int i = 0; i < 9; ++i)
	{
		if (mClock[i / 3][i % 3] == 0)
			continue;

		std::cout << mClock[i / 3][i % 3] << ' ';
	}
}

int main()
{
	int roll = 450;
	std::cin >> roll;

	Rolling_Clock(roll);

	return 0;
}