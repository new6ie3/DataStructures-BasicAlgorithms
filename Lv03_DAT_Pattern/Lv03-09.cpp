#include <iostream>

using namespace std;

int arr[3][5] =
{
	1, 3, 3, 5, 1,
	3, 6, 2, 4, 2,
	1, 9, 2, 6, 5
};

int main()
{
	int n;
	cin >> n;

	int bucket[10] = {};

	for (int i = 0; i < 15; ++i)
	{
		bucket[arr[i / 5][i % 5]]++;
	}

	for (int i = 0; i < 10; ++i)
	{
		if (n == bucket[i])
			cout << i << ' ';
	}

	return 0;
}