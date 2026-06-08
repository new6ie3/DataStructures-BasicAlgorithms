#include <iostream>

using namespace std;
constexpr int num = 4;

int arr[num][num] = 
{
	1, 2, 3, 4,
	5, 6, 7, 8,
	9, 10, 11, 12,
	13, 14, 15, 16
};

int main()
{
	int input[num];
	for (int i = 0; i < num; ++i)
		cin >> input[i];

	size_t i = 0;
	for (size_t y = 0; y < num; ++y)
	{
		for (size_t x = 0; x < num; ++x)
		{
			if (arr[y][x] == input[i])
			{
				arr[y][x] = i + 1;
				i++;
			}
			else arr[y][x] = 0;
		}
	}

	for (size_t y = 0; y < num; ++y)
	{
		for (size_t x = 0; x < num; ++x)
		{
			cout << arr[y][x] << ' ';
		}
		cout << endl;
	}

	return 0;
}