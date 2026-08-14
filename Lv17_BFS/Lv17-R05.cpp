#include <iostream>

using namespace std;

int frame[4][5] =
{
	0, 1, 0, 0, 0,
	0, 1, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 0, 0, 0, 0,
};

int main()
{
	bool flag = true;
	int dy, dx;
	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 5; ++x)
		{
			if (frame[y][x] == 1)
			{
				if (flag)
				{
					cout << '(' << y << ',' << x << ')' << endl;
					flag = false;
				}
				dy = y;
				dx = x;
			}
		}
	}
	cout << '(' << dy << ',' << dx << ')' << endl;

	return 0;
}