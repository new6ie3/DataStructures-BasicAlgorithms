#include <iostream>
#include <queue>

using namespace std;

char value[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
int map[10][10] =
{
	0,1,0,0,0,0,0,0,0,0,
	0,0,1,1,1,1,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,1,0,0,0,
	0,0,0,0,0,0,0,1,0,0,
	0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,1,0,
	0,0,0,0,0,0,0,0,0,1,
	0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,
};

struct Node
{
	int num;
};

void BFS(const char ch)
{
	queue<Node> queue = {};

	int startNum = 0;
	for (int i = 0; i < 10; ++i)
	{
		if (value[i] == ch)
		{
			startNum = i;
			break;
		}
	}

	queue.push(Node{ startNum });

	while (!queue.empty())
	{
		Node now = queue.front();
		cout << value[now.num] << ' ';

		for (int i = 0; i < 10; ++i)
		{
			if (map[now.num][i] == 1)
				queue.push(Node{ i });
		}

		queue.pop();
	}

}

int main()
{
	char ch;
	cin >> ch;

	BFS(ch);

	return 0;
}