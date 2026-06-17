#include <iostream>

using namespace std;

int _floor = 1;

void move()
{
	char move[10];
	while (true)
	{
		cin >> move;
		if (strcmp(move, "up") == 0)
		{
			_floor == -1 ? _floor +=2 : _floor += 1;
			break;
		}
		
		if (strcmp(move, "down") == 0)
		{
			_floor == 1 ? _floor -= 2 : _floor -= 1;
			break;
		}
	}
}

int main()
{
	for (int i = 0; i < 5; ++i);
		move();

	if (_floor > 0)
		cout << 'L' << abs(_floor) << endl;
	else
		cout << 'B' << abs(_floor) << endl;

	return 0;
}