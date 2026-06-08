#include <iostream>

using namespace std;

int vect[4][3] = {};

int main()
{
	int input[4][2];
	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 2; ++x)
		{
			cin >> input[y][x];
		}
	}

	for (int i = 0; i < 4; ++i)
	{
		vect[input[i][0]][input[i][1]] = 5;
	}


	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 3; ++x)
		{
			cout << vect[y][x] << ' ';
		}
		cout << endl;
	}
	return 0;
}