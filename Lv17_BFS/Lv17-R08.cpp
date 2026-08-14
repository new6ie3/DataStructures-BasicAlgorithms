#include <iostream>

using namespace std;

char map[4][3] =
{
	'_', 'A', '_',
	'#', '_', 'D',
	'C', '_', '#',
	'#', '_', '_',
};

int dir[4][2] =
{
	0, 1,		
	1, 0,		
	0, -1,	
	-1, 0		
};

int main()
{
	for (int t = 0; t < 5; ++t)
	{
		for (char monster = 'A'; monster <= 'Z'; ++monster)
		{
			for (int y = 0; y < 4; ++y)
			{
				for (int x = 0; x < 3; ++x)
				{
					if (map[y][x] != monster)
						continue;

					int newY = y + dir[t % 4][0];
					int newX = x + dir[t % 4][1];

					if (newY < 0 || newY >= 4 ||
						newX < 0 || newX >= 3)
						continue;

					if (map[newY][newX] != '_')
						continue;

					map[newY][newX] = map[y][x];
					map[y][x] = '_';

					break;
				}
			}
		}
	}

	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 3; ++x)
		{
			cout << map[y][x] << ' ';
		}
		cout << endl;
	}

	return 0;
}