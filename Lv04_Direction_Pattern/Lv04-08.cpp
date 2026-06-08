#include <iostream>

using namespace std;

char vect[4][5];
int dir[8][2] =
{
	-1, -1,
	-1, 0,
	-1, 1,
	0, -1,
	0, 1,
	1, -1,
	1, 0,
	1, 1,
};

void Boom()
{
	int y, x;
	cin >> y >> x;
	
	for (int i = 0; i < 8; ++i)
	{
		int newX = x + dir[i][0];
		int newY = y + dir[i][1];

		if(newX > -1 && newX < 5 && newY > -1 && newY < 4)
			vect[newY][newX] = '#';
	}


	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cout << vect[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

int main()
{
	for (int i = 0; i < 20; ++i)
		vect[i / 5][i % 5] = '_';

	Boom();
	Boom();

	return 0;
}