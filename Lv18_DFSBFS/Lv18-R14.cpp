#include <iostream>
#include <string>

int max[3] = {};
std::string maxIdx[3] = {};
int main()
{
	int w = 4;
	int h = 3;

	int** ary = new int* [h];

	for (int y = 0; y < h; ++y)
	{
		ary[y] = new int[w];
	}

	for (int y = 0; y < h; ++y)
	{
		for (int x = 0; x < w; ++x)
		{
			std::cin >> ary[y][x];
		}
	}

	for (int y = 0; y < h; ++y)
	{
		for (int x = 0; x < w; ++x)
		{
			for (int k = 0; k < 3; ++k)
			{
				if (ary[y][x] > max[k])
				{
					for (int i = 2; i > k; --i)
					{
						max[i] = max[i - 1];
						maxIdx[i] = maxIdx[i - 1];
					}

					max[k] = ary[y][x];
					maxIdx[k] = "(" + std::to_string(y) + "," + std::to_string(x) + ")";
					break;
			}
		}
	}

	for (int k = 0; k < 3; ++k)
	{
		std::cout << max[k] << maxIdx[k];
		std::cout << std::endl;
	}

	for (int y = 0; y < h; ++y)
	{
		delete[] ary[y];
	}
	delete[] ary;

	return 0;
}