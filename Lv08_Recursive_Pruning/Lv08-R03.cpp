#include <iostream>

using namespace std;

int arr[4][4];

int main()
{
	for (int y = 0; y < 3; ++y)
	{
		for (int x = 0; x < 3; ++x)
		{
			 cin >> arr[y][x];
		}
	}

	for (int y = 0; y < 4; ++y)
	{
		if (y == 3)
		{
			for (int x = 0; x < 4; ++x)
			{
				if (x == 3)
					arr[y][x] = arr[0][0] + arr[1][1] + arr[2][2];
				else
					arr[y][x] = arr[0][x] + arr[1][x] + arr[2][x];
			}
		}
		else
			arr[y][3] = arr[y][0] + arr[y][1] + arr[y][2];

	}

	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			cout << arr[y][x] << ' ';
		}
		cout << endl;
	}

	return 0;
}