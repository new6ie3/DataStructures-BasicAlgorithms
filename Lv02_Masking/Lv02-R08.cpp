#include <iostream>

using namespace std;

char str[5][5] =
{
	'A', 'B', 'C', 'D', 'E',
	'F', 'G', 'H', 'I', 'J',
	'K', 'L', 'M', 'N', 'O',
	'P', 'Q', 'R', 'S', 'T',
	'U', 'V', 'W', 'X', 'Y'
};

void PrintOffset_M(char ch)
{
	int mX, mY;
	for (size_t i = 0; i < 5; ++i)
	{
		for (size_t j = 0; j < 5; ++j)
		{
			if (str[i][j] == 'M')
			{
				mX = j;
				mY = i;
				break;
			}
		}
	}

	int offsetX, offsetY;
	for (size_t i = 0; i < 5; ++i)
	{
		for (size_t j = 0; j < 5; ++j)
		{
			if (str[i][j] == ch)
			{
				offsetX = j - mX;
				offsetY = i - mY;
				break;
			}
		}
	}

	cout << offsetY << ',' << offsetX << endl;
	
}

int main()
{
	char input;
	cin >> input;

	PrintOffset_M(input);

	return 0;
}