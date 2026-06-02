#include <iostream>

using namespace std;

void PrintMaskArr(bool (*mask)[5], int (*arr)[5], int find)
{
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (mask[i][j] && arr[i][j] == find)
			{
				cout << find << " 존재" << endl;
				return;
			}
		}
	}

	cout << find << " 없음" << endl;
}

int main()
{
	bool mask[2][5] =
	{
		0, 0, 1, 0, 0,
		0, 0, 1, 1, 1
	};

	int arr[2][5] =
	{
		3, 5, 4, 1, 1,
		3, 5, 2, 5, 6
	};

	int input;
	cin >> input;

	PrintMaskArr(mask, arr, input);

	return 0;
}