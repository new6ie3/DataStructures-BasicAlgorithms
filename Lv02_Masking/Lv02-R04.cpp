#include <iostream>

using namespace std;

int map[2][3] =
{
	3, 55, 42,
	-5, -9, -10
};

int pix[2][2];

bool IsColor(int color)
{
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (map[i][j] == color)
				return true;
		}
	}

	return false;
}

int main()
{
	cin >> pix[0][0] >> pix[0][1];
	cin >> pix[1][0] >> pix[1][1];

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			bool result = IsColor(pix[i][j]);

			if (result)
				cout << "Y ";
			else cout << "N ";
		}
		cout << endl;
	}


	return 0;
}