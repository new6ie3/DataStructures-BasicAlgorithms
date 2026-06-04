#include <iostream>

using namespace std;

char town[3][3] =
{
	'C', 'B', 'A',
	'B', 'M', 'Z',
	'Q', 'P', 'O'
};

int main()
{
	char black[4];
	for (int i = 0; i < 4; ++i)
		cin >> black[i];

	int count = 0;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			if (town[j / 3][j % 3] == black[i])
			{
				count++;
				break;
			}
		}
	}

	cout << count << "Έν";

	return 0;
}