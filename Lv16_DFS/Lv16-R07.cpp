#include <iostream>

int array[4][3] =
{
	3, 5, 1,
	3, 1, 2,
	3, 4, 6,
	5, 4, 6,
};

int main()
{
	int count[6] = {};
	for (size_t target = 1; target < 7; ++target)
	{
		for (size_t y = 0; y < 4; ++y)
		{
			for (size_t x = 0; x < 3; ++x)
			{
				if (array[y][x] == target)
					count[target - 1]++;
			}
		}
	}


	for (size_t i = 0; i < 6; ++i)
	{
		std::cout << i + 1 << ' ';
		for (size_t j = 0; j < count[i]; ++j)
		{
			std::cout << " *";
		}
		std::cout << std::endl;
	}

	return 0;
}