#include <iostream>

using namespace std;

int graph[5][5] =
{
	0, 1, 7, 2, 0,
	1, 0, 8, 0, 5,
	7, 8, 0, 3, 6,
	2, 0, 3, 0, 0,
	0, 5, 6, 0, 0
};

int main()
{
	for (size_t y = 0; y < 5; ++y)
	{
		for (size_t x = y + 1; x < 5; ++x)
		{
			if (graph[y][x] == 0)
				continue;

			cout << char('A' + y) << ' ' << char('A' + x) << ' ' << graph[y][x] << endl;
		}
	}

	return 0;
}