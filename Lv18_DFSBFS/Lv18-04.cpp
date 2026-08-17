#include <iostream>
#include <queue>

int map[6][6] =
{
	0,0,0,0,1,0,
	1,0,1,0,0,1,
	1,0,0,1,0,0,
	1,1,0,0,0,0,
	0,1,0,1,0,1,
	0,0,1,1,0,0,
};

struct Node
{
	int num;
	int level;
	int* path;
};

void BFS(int start)
{
	std::queue<Node> queue;
	int path[6] = {};
	path[start] = 1;
	queue.push({ start, 0, path });

	while (!queue.empty())
	{
		Node now = queue.front();
		std::cout << now.num << std::endl;
		for (int i = 0; i < 6; ++i)
		{
			if (map[now.num][i] == 1 && !now.path[i])
			{
				Node next = now;
				next.level += 1;
				next.num = i;
				next.path[i] = 1;

				queue.push(next);
			}
		}
		queue.pop();
	}
}

int main()
{
	int start = 0;

	BFS(start);

	return 0;
}