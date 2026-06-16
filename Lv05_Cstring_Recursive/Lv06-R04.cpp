#include <iostream>

using namespace std;

char str[4][3] =
{
	'A', '_', 'C',
	'_', 'K', '_',
	'T', '_', '_',
	'_', '_', '_'
};

int main()
{
	for (int x = 0; x < 3; ++x)
	{
		for (int y = 2; y >= 0; --y)
		{
			for (int k =  3 - y; k >= 0; --k)
			{
				if (str[y][x] != '_' && str[y + k][x] == '_')
				{
					char temp = str[y][x];
					str[y][x] = str[y + k][x];
					str[y + k][x] = temp;
					break;
				}
			}
		}
	}


	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 3; ++x)
		{
			cout << str[y][x] << ' ';
		}
		cout << endl;
	}

	return 0;
}