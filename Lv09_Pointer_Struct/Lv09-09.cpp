#include <iostream>

using namespace std;

char path[3] = {};

void Print_Game()
{
	int win = 0;
	for (int i = 0; i < 3; ++i)
	{
		if (path[i] == 'O')
			win++;
	}

	switch (win)
	{
	case 3:
		cout << "3½Â";
		break;

	case 1:
	case 2:
		cout << win << "½Â" << 3 - win << "ÆÐ";
		break;

	case 0:
		cout << "3ÆÐ";
		break;
	}

	cout << '(';
	for (int i = 0; i < 3; ++i)
	{
		if (path[i] == 'O')
			cout << "½Â";
		else
			cout << "ÆÐ";
	}
	cout << ')' << endl;
}

void Game(int n = 0)
{
	if (n == 3)
	{
		Print_Game();
		return;
	}

	for (int i = 0; i < 2; ++i)
	{
		i == 0 ? path[n] = 'O' : path[n] = 'X';
		Game(n + 1);
		path[n] = 0;
	}
}

int main()
{
	Game();

	return 0;
}