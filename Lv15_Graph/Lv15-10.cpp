#include <iostream>

using namespace std;

int graph[4][4] = {};
int main()
{
	int count[4] = {};
	for (size_t y = 0; y < 4; ++y)
	{
		for (size_t x = 0; x < 4; ++x)
		{
			cin >> graph[y][x];
			if (graph[y][x] == 1)
			{
				count[y]++;
			}
		}
	}

	int max = 0;
	for (size_t i = 1; i < 4; ++i)
	{
		if (count[max] < count[i])
		{
			max = i;
		}
	}

	cout << char(max + 'A') << endl;


	return 0;
}