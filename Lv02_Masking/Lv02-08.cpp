#include <iostream>

using namespace std;

int CountInArray(int (*arr)[3], int target)
{
	int count = 0;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (target == arr[i][j])
				count++;
		}
	}
	return count;
}

int main()
{
	int vect[3][3] =
	{
		3, 7, 4,
		2, 2, 4,
		2, 2, 5
	};

	int target[3];
	int maxTarget;
	int prevCount = 0;
	for (int i = 0; i < 3; ++i)
	{
		cin >> target[i];
		int count = CountInArray(vect, target[i]);

		if (count > prevCount)
		{
			maxTarget = target[i];
			prevCount = count;
		}
	}

	cout << maxTarget << endl;

	return 0;
}