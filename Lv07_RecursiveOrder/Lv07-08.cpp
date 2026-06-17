#include <iostream>

using namespace std;

int arr[3][2][2] =
{
	2, 4,
	1, 5,

	2, 3,
	3, 6,

	7, 3,
	1, 5
};

int main()
{
	int input;
	cin >> input;

	int max = INT_MIN;
	int min = INT_MAX;
	for (int i = 0; i < 4; ++i)
	{
		if (arr[input][i / 2][i % 2] > max)
			max = arr[input][i / 2][i % 2];

		if (arr[input][i / 2][i % 2] < min)
			min = arr[input][i / 2][i % 2];
	}

	cout << "MAX = " << max << endl;
	cout << "MIN = " << min << endl;

	return 0;
}