#include <iostream>

using namespace std;

char arr[3][3][3];

int main()
{
	char ch;
	cin >> ch;

	for (int z = 0; z < 3; ++z)
	{
		for (int y = 0; y < 3; ++y)
		{
			for (int x = 0; x < 3; ++x)
			{
				arr[z][y][x] = ch;
			}
		}
		ch++;
	}

	for (int z = 0; z < 3; ++z)
	{
		for (int y = 0; y < 3; ++y)
		{
			for (int x = 0; x < 3; ++x)
			{
				cout << arr[z][y][x];
			}
			cout << endl;
		}
	}

	return 0;
}