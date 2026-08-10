#include <iostream>

int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
int map[][9] =
{
	0,1,1,0,0,0,0,0,0,
	0,0,0,1,1,1,0,0,0,
	0,0,0,0,0,0,1,1,1,
	0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,
};

char path[10] = {};
void DFS(int now = 0, int level = 0)
{
	if (level == 2)
	{
		std::cout << path << std::endl;
		return;
	}

	for (size_t i = 0; i < 9; ++i)
	{
		if (map[now][i] == 1)
		{
			path[level + 1] = '0' + array[i];
			DFS(i, level + 1);
			path[level + 1] = 0;
		}
	}
}

int main()
{
	path[0] = '0';
	DFS();

	return 0;
}