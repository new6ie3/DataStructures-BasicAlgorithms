#include <iostream>

using namespace std;

int arr[3][3] =
{
	3, 1, 9,
	7, 2, 1,
	1, 0, 8
};

bool Masking(bool(*mask)[3])
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (mask[i][j])
			{
				if (arr[i][j] >= 3 && arr[i][j] <= 5)
					return true;
			}
		}
	}

	return false;
}

int main()
{
	bool mask[3][3];
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
			cin >> mask[i][j];
	}

	bool result = Masking(mask);

	if (result)
		cout << "발견" << endl;
	else
		cout << "미발견" << endl;

	return 0;
}