#include <iostream>

using namespace std;

int arr[5] = { 3, 5, 1, 9, 7 };

int main()
{
	char dir[4] = { 'R', 'R', 'R', 'L'};
	for (int i = 0; i < 4; ++i)
		cin >> dir[i];

	for (int i = 0; i < 4; ++i)
	{
		switch (dir[i])
		{
			int temp;

		case 'R':
			temp = arr[4];
			for (int j = 3; j > -1; --j)
			{
				arr[j + 1] = arr[j];
			}
			arr[0] = temp;
			break;

		case 'L':
			temp = arr[0];
			for (int j = 0; j < 4; ++j)
			{
				arr[j] = arr[j + 1];
			}
			arr[4] = temp;
			break;
		}

	}
	
	for(int i = 0; i < 5; ++i)
		cout << arr[i] << ' ';

	return 0;
}