#include <iostream>
using namespace std;

int ary[3][3] =
{
	3, 3, 3,
	5, 6, 7,
	9, 9, 9,
};

void Rotto(int dy)
{
	for (int x = 1; x < 3; ++x)
	{
		if (ary[dy][0] != ary[dy][x])
		{
			cout << 'x' << endl;
			return;
		}
	}

	cout << ary[dy][0] << endl;
}

int main()
{
	for (int y = 0; y < 3; ++y)
	{
		for (int x = 0; x < 3; ++x)
		{
			cin >> ary[y][x];
		}
	}

	for (int y = 0; y < 3; ++y)
	{
		Rotto(y);
	}

	return 0;
}
