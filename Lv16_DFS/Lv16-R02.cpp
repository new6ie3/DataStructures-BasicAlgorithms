#include <iostream>

char path[10] = {};

void Func(int depth, int branch, int level = 0)
{
	if (level == depth)
	{
		std::cout << path << std::endl;
		return;
	}

	for (size_t i = 0; i < branch; ++i)
	{
		path[level] = i + '0';
		Func(depth, branch, level + 1);
		path[level] = 0;
	}
}

int main()
{
	int depth, branch;
	std::cin >> depth >> branch;

	Func(depth, branch);

	return 0;
}