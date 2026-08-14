#include <iostream>

using namespace std;

int value[] = { 0, 1, 3, 4, 2, 5 };
int map[6][6] =
{
	0,1,1,1,0,0,
	0,0,0,0,1,1,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
};

struct Queue
{
	int now;
	int level;
};

int head = 0;
int tail = 1;

int main()
{
	Queue queue[6] = { {0, 0} };
	while (head != tail)
	{
		Queue now = queue[head];
		if (value[now.now] & 1)
			cout << value[now.now] << ' ';

		for (int i = 0; i < 6; ++i)
		{
			if (map[now.now][i] == 1)
			{
				queue[tail] = { i, now.level + 1 };
				tail++;
			}
		}
		head++;
	}


	return 0;
}