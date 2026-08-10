#include <iostream>

int array[] = {0, 3, 4, 2, 4, 1, 0, 3};
int map[8][8] =
{
	0,1,1,0,0,0,0,0,	// 0
	0,0,0,1,1,0,0,0,	// 3
	0,0,0,0,0,1,1,0,	// 4
	0,0,0,0,0,0,0,1,	// 2
	0,0,0,0,0,0,0,0,	// 4
	0,0,0,0,0,0,0,0,	// 1
	0,0,0,0,0,0,0,0,	// 0
	0,0,0,0,0,0,0,0,	// 3
};

void DFS(int now = 0)
{
	std::cout << array[now] << ' ';

	for (size_t i = 0; i < 8; ++i)
	{
		if (map[now][i] == 1)
		{
			DFS(i);
		}
	}
};

int main()
{
	int index, value;
	std::cin >> index >> value;

	array[index] = value;
	DFS();

	return 0;
}