#include <iostream>

using namespace std;

char ary[4][4] =
{
	'#', 'A', 'F', 'G',
	'B', '#', '#', 'E',
	'#', '#', '#', 'D',
	'#', 'E', '#', '#'
};

int main()
{
	int count[4] = {};
	for (int x = 0; x < 4; ++x)
	{
		for (int y = 0; y < 4; ++y)
		{
			if (ary[y][x] != '#')
			{
				count[x]++;
			}
		}
		cout << count[x] << ' ';
	}

	return 0;
}