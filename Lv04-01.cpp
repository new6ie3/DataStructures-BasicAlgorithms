#include <iostream>

using namespace std;

int arr[3][3] =
{
	3, 5, 4,
	1, 1, 2,
	1, 3, 9
};

int dir[4][2]
{
	0, -1,
	-1, 0,
	1, 0,
	0, 1
};

int Direction(int dx, int dy)
{
	int sum = 0;
	
	for (int i = 0; i < 4; ++i)
	{
		int newX = dx + dir[i][0];
		int newY = dy + dir[i][1];

		sum += arr[newY][newX];
	}

	return sum;
}

int main()
{
	int y, x;
	cin >> y >> x;

	int result = Direction(x, y);
	cout << result;

	return 0;
}