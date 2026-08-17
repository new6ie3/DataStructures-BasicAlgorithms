#include <iostream>
#include <queue>

int map[6][6] =
{
	0,1,0,0,1,0,
	0,0,1,0,0,1,
	0,0,0,1,0,0,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
};

struct Node
{
	int num;
	int level;
};

void BFS(int now)
{
	std::queue<Node> queue;
	queue.push({ now, 0 });

	while (!queue.empty())
	{
		Node now = queue.front();
		std::cout << now.num << ' ';
		for (int i = 0; i < 6; ++i)
		{
			if (map[now.num][i] == 1)
			{
				Node next;
				next.level = now.level + 1;
				next.num = i;
				queue.push(next);
			}
		}
		queue.pop();
	}
}

int main()
{
	int start = 0;
	std::cin >> start;

	BFS(start);

	return 0;
}