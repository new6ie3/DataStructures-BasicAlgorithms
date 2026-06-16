#include <iostream>

using namespace std;

char field[7][7] =
{
	'_', '_', '_', '_', '_', '_', '_',
	'_', '_', 'W', '_', 'W', '_', '_',
	'_', 'W', 'B', '_', 'B', 'W', '_',
	'_', '_', 'W', 'B', 'W', '_', '_',
	'_', '_', 'B', 'W', '_', 'W', '_',
	'_', 'W', 'W', '_', '_', '_', '_',
	'_', '_', '_', '_', '_', '_', '_'
};

int direct[4][2]
{
	-1, 0,
	+1, 0,
	0, -1,
	0, +1
};

int main()
{
	int y, x;
	cin >> y >> x;
	field[y][x] = 'W';

	int count = 0;
	for (int y = 0; y < 7; ++y)
	{
		for (int x = 0; x < 7; ++x)
		{
			if (field[y][x] == 'B')
			{
				bool result = true;
				for (int k = 0; k < 4; ++k)
				{
					int newY = y + direct[k][0];
					int newX = x + direct[k][1];
					
					if (field[newY][newX] != 'W')
					{
						result = false;
						break;
					}
				}

				if (result == true) count++;
			}
		}
	}

	cout << count << endl;

	return 0;
}