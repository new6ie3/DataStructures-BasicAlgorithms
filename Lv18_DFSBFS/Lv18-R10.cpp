#include <iostream>

int visited[10] = {};
int count = 0;
void Run(int num, int level = 0)
{
	if (level == 3)
	{
		count++;
		return;
	}

	for (int i = 0; i < num; ++i)
	{
		if (visited[i] == 0)
		{
			visited[i] = 1;
			Run(num, level + 1);
			visited[i] = 0;
		}

	}
}

int main()
{
	int num;
	std::cin >> num;
	Run(num);

	std::cout << count;

	return 0;
}