#include <iostream>

int visited[6] = {};
int map[6][6] =
{
	0,0,1,0,2,0,
	5,0,3,0,0,0,
	0,0,0,0,0,7,
	3,0,0,0,8,0,
	0,0,9,0,0,0,
	4,0,0,7,0,0,
};

int cost = 0;
void DFS(int now, int level)
{
	std::cout << now << ' ' << cost << std::endl;
	for (int i = 0; i < 6; ++i)
	{
		if (map[now][i] && !visited[i])
		{
			visited[i] = 1;
			cost += map[now][i];
			DFS(i, level);
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