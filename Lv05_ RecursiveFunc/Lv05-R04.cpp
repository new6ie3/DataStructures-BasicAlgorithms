#include <iostream>

using namespace std;

bool arrayA[4][4] =
{
	1, 1, 1, 1,
	1, 0, 0, 1,
	1, 0, 0, 0,
	0, 0, 1, 0
};

bool arrayB[4][4] =
{
	0, 0, 0, 0,
	0, 0, 0, 0,
	1, 1, 1, 1,
	0, 1, 0, 0
};

void InputArray(bool array[4][4])
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cin >> array[i][j];
		}
	}
}

bool IsOverlap()
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (arrayA[i][j] && arrayB[i][j])
				return false;
		}
	}

	return true;
}

int main()
{
	InputArray(arrayA);
	InputArray(arrayB);

	bool result = IsOverlap();

	if (result) cout << "걸리지 않는다";
	else cout << "걸리다";

	return 0;
}