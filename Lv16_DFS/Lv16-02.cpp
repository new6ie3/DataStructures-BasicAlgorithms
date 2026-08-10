#include <iostream>

char mama_coco[8] = { 'A', 'B', 'H',' C', 'D', 'G', 'E', 'F' };
int map[8][8] =
{
	0,1,1,1,0,0,0,0,	// A
	1,0,0,0,0,0,0,0,	// B
	1,0,0,0,0,0,0,0,	// H
	1,0,0,0,1,1,1,0,	// C
	0,0,0,1,0,0,0,1,	// D
	0,0,0,1,0,0,0,0,	// G
	0,0,0,1,0,0,0,0,	// E
	0,0,0,0,1,0,0,0,	// F
};

int main()
{
	char find;
	std::cin >> find;

 	size_t me;
	for (size_t i = 0; i < 8; ++i)
	{
		if (mama_coco[i] == find)
		{
			me = i;
			break;
		}
	}

	for (size_t i = 0; i < 8; ++i)
	{
		if (map[i][me] == 1)
		{
			for (size_t j = 0; j < 8; ++j)
			{
				if (map[i][j] == 1 && j != me)
					std::cout << mama_coco[j] << ' ';
			}
			break;
		}
	}

	return 0;
}