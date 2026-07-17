#include <iostream>

using namespace std;

int cube[3][3] =
{
	0, 5, 4,
	3, 0, 0,
	0, 0, 1
};

int main()
{
	int input;
	cin >> input;
	int result[3][3];

	for (int i = 0; i < input; ++i)
	{
		for (int y = 0; y < 3; ++y)
		{
			for (int x = 0; x < 3; ++x)
			{
				result[x][2 - y] = cube[y][x];
			}
		}

		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				cube[y][x] = result[y][x];
			}
		}
	}

	for (int y = 0; y < 3; ++y)
	{
		for (int x = 0; x < 3; ++x)
		{
			if (result[y][x] == 0)
				cout << '_';
			else
				cout << result[y][x];
		}
		cout << endl;
	}


	return 0;
}