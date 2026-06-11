#include <iostream>

using namespace std;
int py, px;

int arr[4][5] =
{
	3, 5, 4, 2, 5,
	3, 3, 3, 2, 1,
	3, 2, 6, 7, 8,
	9, 1, 1, 3, 2
};

int SumPattern(int dy, int dx)
{
	int sum = 0;
	for (int y = dy; y < dy + py; ++y)
	{
		for (int x = dx; x < dx + px; ++x)
		{
			if (y >= 4 || x >= 5) return 0;
			
			sum += arr[y][x];
		}
	}

	return sum;
}

int main()
{
	cin >> py >> px;

	int max = 0;
	int mx, my;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			int sum = SumPattern(i, j);
			if (max < sum)
			{
				max = sum;
				mx = j;
				my = i;
			}
		}
	}
	cout << '(' << my << ',' << mx << ')';

	return 0;
}