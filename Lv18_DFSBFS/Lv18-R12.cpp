#include <iostream>

int map[6][6] =
{
	0,1,1,0,0,0,
	0,0,0,1,1,1,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
};

char path[3] = {};

void Run(int now = 0, int level = 0)
{
	bool flag = false;
	for (int i = 0; i < 6; ++i)
	{
		if (map[now][i] == 1)
		{
			flag = true;
			break;
		}
	}
	if (!flag)
	{
		std::cout << path << std::endl;
		return;
	}

	for (int i = 0; i < 6; ++i)
	{
		if (map[now][i] == 1)
		{
			path[level + 1] = i + 'A';
			Run(i, level + 1);
			path[level + 1] = 0;
		}

	}
}

int main()
{
	path[0] = 'A';
	Run();

	return 0;
}