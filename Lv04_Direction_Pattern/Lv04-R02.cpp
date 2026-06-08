#include <iostream>

using namespace std;

int arr[5][4] = 
{
	1, 0,0,0,
	0,0,0,1,
	0,0,0,0,
	0,1,0,0,
	0,0,0,1,
};
int dir[8][2] =
{
	-1, -1,
	-1, 0,
	-1, 1,
	0, -1,
	0, 1,
	1, -1,
	1, 0,
	1, 1
};

bool Func(int dy, int dx)
{
	for (size_t i = 0; i < 8; ++i)
	{
		int newY = dy + dir[i][0];
		int newX = dx + dir[i][1];

		if (newX < 4 && newX > -1 && newY < 5 && newY > -1)
		{
			if (arr[newY][newX] == 1) return false;
		}
	}

	return true;
}

int main()
{
	for (int i = 0; i < 20; ++i)
		cin >> arr[i / 4][i % 4];

	bool result;
	for (size_t y = 0; y < 5; ++y)
	{
		for (size_t x = 0; x < 4; ++x)
		{
			if (arr[y][x] == 1)
			{
				result = Func(y, x);
				if (result == false)
				{
					y = 5;
					break;
				}
			}
		}
	}
	
	if (result)
		cout << "안정된 상태" << endl;
	else
		cout << "불안정한 상태" << endl;

	return 0;
}