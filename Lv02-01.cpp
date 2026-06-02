#include <iostream>

using namespace std;

void PrintOffset(char (*str)[4], char ch, int offsetX, int offsetY)
{
	for (int y = 0; y < 3; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			if (ch == str[y][x])
			{
				char result = str[y + offsetY][x + offsetX];
				cout << result << endl;
				return;
			}
		}
	}
}


int main()
{
	char str[3][4] =
	{
		{'A', 'T', 'K', 'B'},
		{'C', 'Z', 'F', 'D'},
		{'H', 'G', 'E', 'I'}
	};

	char input;
	cin >> input;

	int offsetX, offsetY;
	cin >> offsetY >> offsetX;

	PrintOffset(str, input, offsetX, offsetY);

	return 0;
}