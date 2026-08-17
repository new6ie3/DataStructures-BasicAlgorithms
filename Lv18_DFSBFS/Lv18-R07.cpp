#include <iostream>

int ary[5] = {1, 3, 4, 7, 9};

int count = 0;
void Run(int level = 0, int sum = 0)
{
	if (level == 5)
	{
		if (sum >= 10 && sum <= 20)
			count++;

		return;
	}

	for (int i = 0; i < 2; ++i)
	{
		i == 0 ? Run(level + 1, sum) : Run(level + 1, sum + ary[level]);
	}
}

int main()
{
	Run();
	std::cout << count;

	return 0;
}