#include <iostream>

int data[] = { 0, 2, 3, 4, 5, 6, 1 };

void DFS(int num, int** map, size_t size)
{
	std::cout << data[num] << ' ';

	for (size_t i = 0; i < size; ++i)
	{
		if (map[num][i] == 1)
		{
			DFS(i, map, size);
		}
	}
}

int main()
{
	size_t size;
	std::cin >> size;

	int** map = new int*[size];
	for (size_t i = 0; i < size; ++i)
		map[i] = new int[size];

	for (size_t y = 0; y < size; ++y)
	{
		for (size_t x = 0; x < size; ++x)
		{
			std::cin >> map[y][x];
		}
	}

	DFS(0, map, size);

	for (size_t i = 0; i < size; ++i)
		delete[] map[i];

	delete[] map;

	return 0;
}