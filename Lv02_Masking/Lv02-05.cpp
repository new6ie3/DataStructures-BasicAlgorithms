#include <iostream>

using namespace std;

int main()
{
	bool mask1[4][4] =
	{
		0, 0, 0, 1,
		1, 1, 0, 1,
		1, 0, 0, 1,
		1, 1, 1, 1
	};

	bool mask2[4][4] =
	{
		1, 1, 1, 1,
		1, 0, 1, 1,
		1, 0, 0, 0,
		1, 0, 0, 0
	};

	bool mask3[4][4] = {};

	for (size_t i = 0; i < 4; ++i)
	{
		for (size_t j = 0; j < 4; ++j)
		{
			mask3[i][j] = mask1[i][j] | mask2[i][j];

			if (!mask3[i][j])
				cout << '(' << i << ',' << j << ')' << endl;
		}
	}

	return 0;
}