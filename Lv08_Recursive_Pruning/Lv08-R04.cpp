#include <iostream>

using namespace std;

int arr[3][4] =
{
	3, 5, 4, 1,
	1, 1, 2, 3,
	6, 7, 1, 2
};

int main()
{
	int input[4] = { 1, 3 ,7, 6 };
	for (int i = 0; i < 4; ++i)
		cin >> input[i];

	for (int y = 0; y < 3; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			for (int k = 0; k < 4; ++k)
			{
				if (input[k] == arr[y][x])
				{
					if (k != 3)
					{
						arr[y][x] = input[k + 1];
						break;
					}
					else
					{
						arr[y][x] = input[0];
						break;
					}
				}
			}
		}
	}


	for (int y = 0; y < 3; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			cout << arr[y][x] << ' ';
		}
		cout << endl;
	}

	return 0;
}
