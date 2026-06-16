#include <iostream>

using namespace std;

char str[4][3] =
{
	'D', 'T', 'K',
	'E', 'A', 'P',
	'C', 'Q', 'G',
	'P', 'H', 'B'
};

int main()
{
	int	sumA;
	int	sumB;

	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 3; ++x)
		{
			if (str[y][x] == 'A')
			{
				sumA = y + x;
			}

			if (str[y][x] == 'B')
			{
				sumB = y + x;
			}
		}
	}
	
	int move = 0;
	if (sumA > sumB)
		move = sumA - sumB;
	else
		move = sumB - sumA;

	cout << move;
	return 0;
}