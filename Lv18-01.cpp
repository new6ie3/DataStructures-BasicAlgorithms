#include <iostream>

int visited[6] = {};
int map[6][6] =
{
	0,0,1,1,0,1,
	0,0,0,1,1,1,
	0,0,0,0,1,1,
	0,0,0,0,0,0,
	1,0,0,0,0,1,
	0,0,0,0,0,0,
};

void DFS(int num, int level)
{
	std::cout << num << ' ';

	for (int i = 0; i < 6; ++i)
	{
		if (map[num][i] == 1 && !visited[i])
		{
			visited[i] = 1;
			DFS(i, level + 1);
		}
	}
}

int main()
{
	int start = 0;
	std::cin >> start;

	visited[start] = 1;
	DFS(start, 0);

	return 0;
}