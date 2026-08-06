#include <iostream>

using namespace std;

int tetris[5][4] =
{
	0, 0, 0, 0,
	0, 0, 1, 0,
	1, 1, 1, 1,
	1, 1, 1, 1,
	0, 1, 0, 0
};

void Fever()
{
    for (int y = 4; y >= 0; --y)
    {
        bool full = true;
        for (int x = 0; x < 4; ++x)
        {
            if (tetris[y][x] == 0)
            {
                full = false;
                break;
            }
        }

        if (full == true)
        {
            for (int row = y; row > 0; --row)
            {
                for (int x = 0; x < 4; ++x)
                    tetris[row][x] = tetris[row - 1][x];
            }

            for (int x = 0; x < 4; ++x)
                tetris[0][x] = 0;

            ++y;
        }
    }
}

void Input()
{
    for (size_t y = 0; y < 5; ++y)
    {
        for (size_t x = 0; x < 4; ++x)
        {
            cin >> tetris[y][x];
        }
    }
}

void Print()
{
    for (size_t y = 0; y < 5; ++y)
    {
        for (size_t x = 0; x < 4; ++x)
        {
            cout << tetris[y][x] << ' ';
        }
        cout << endl;
    }
}

int main()
{
    Input();
	Fever();
    Print();

	return 0;
}