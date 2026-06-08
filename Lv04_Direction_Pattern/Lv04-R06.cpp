#include <iostream>

using namespace std;

char map[3][4] =
{
	'A', 'B', 'G', 'K',
	'T', 'T', 'A', 'B',
	'A', 'C', 'C', 'D'
};

char pattern[2][2] =
{
	'A', 'B',
	'C', 'D'
};

bool IsPattern(int dy, int dx)
{
	for (size_t y = 0; y < 2; ++y)
	{
		for (size_t x = 0; x < 2; ++x)
		{
			if (map[dy + y][dx + x] != pattern[y][x])
				return false;
		}
	}
	return true;
}

int main()
{
	int count = 0;
	cin >> pattern[0][0] >> pattern[0][1];
	cin >> pattern[1][0] >> pattern[1][1];

	for (int y = 0; y < 2; ++y)
	{
		for (int x = 0; x < 3; ++x)
		{
			bool result = IsPattern(y, x);
			if (result) count++;
		}
	}

	if (count)
		cout << "발견(" << count << "개)" << endl;
	else
		cout << "미발견";

	return 0;
}