#include <iostream>

using namespace std;

char _left[4][4] =
{
	'A', 'B', 'B', 'A',
	'B', 'A', 'C', 'B',
	'C', 'B', 'A', 'A',
	'D', 'D', 'A', 'B'
};

char _right[4][4] =
{
	'A', 'B', 'C', 'D',
	'B', 'B', 'A', 'B',
	'C', 'B', 'A', 'C',
	'B', 'A', 'A', 'A'
};

int backet[256] = {};

int main()
{
	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			cin >> _left[y][x];
		}
	}

	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			if (_left[y][x] == _right[y][x])
			{
				backet[_left[y][x]]++;
			}
		}
	}

	int max = 0;
	char result;
	for (int i = 'A'; i <= 'D'; ++i)
	{
		if (backet[i] > max)
		{
			max = backet[i];
			result = (char)i;
		}
	}
	
	cout << result << endl;

	return 0;
}