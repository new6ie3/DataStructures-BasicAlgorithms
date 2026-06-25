#include <iostream>

using namespace std;

char field[3][4];

void Spon(int y, int x)
{
	field[y][x] = '#';
}

bool Check_Other(int y, int x)
{
	for (int i = 0; i < 4; ++i)
	{
		if (field[y][i] == '#' && i != x)
			return false;
	}

	for (int i = 0; i < 3; ++i)
	{
		if (field[i][x] == '#' && i != y)
			return false;
	}

	return true;
}

bool Check_Field()
{
	for (int y = 0; y < 3; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			if (field[y][x] == '#')
			{
				bool result = Check_Other(y, x);
				if (!result) return false;
			}
		}
	}

	return true;
}

int main()
{
	Spon(0, 0);
	Spon(1, 2);
	Spon(2, 1);

	bool result = Check_Field();
	if (result)
		cout << "안전" << endl;
	else
		cout << "위험" << endl;

	return 0;
}