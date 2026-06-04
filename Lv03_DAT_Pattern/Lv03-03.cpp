#include <iostream>

using namespace std;

int main()
{
	int arr[3][3];
	int number[9] = {};

	for (size_t i = 0; i < 9; ++i)
		cin >> arr[i / 3][i % 3];


	for (size_t i = 0; i < 9; ++i)
	{
		for (size_t j = 0; j < 9; ++j)
		{
			if (arr[j / 3][j % 3] == i + 1)
			{
				number[i]++;
				break;
			}
		}
		if (!number[i])
			cout << i + 1 << ' ';
	}



	return 0;
}