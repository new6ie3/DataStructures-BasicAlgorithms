#include <iostream>

using namespace std;

char arr[2][2][3] =
{
	'A', 'T', 'B',
	'C', 'C', 'B',

	'A', 'A', 'A',
	'B', 'B', 'C'
};

int main()
{
	char ch;
	cin >> ch;

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			for (int k = 0; k < 3; ++k)
			{
				if (ch == arr[i][j][k])
				{
					cout << "발견";
					return 0;
				}
			}
		}
	}

	cout << "미발견";
	return 0;
}