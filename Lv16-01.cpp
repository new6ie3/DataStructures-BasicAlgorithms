#include <iostream>

int num[7] = { 2, 1, 0, 3, 5, 4, 6 };
int map[7][7] =
{
	0,1,1,1,0,0,0,	// 2
	0,0,0,0,1,0,0,	// 1
	0,0,0,0,0,1,1,	// 0
	0,0,0,0,0,0,0,	// 3
	0,0,0,0,0,0,0,	// 5
	0,0,0,0,0,0,0,	// 4
	0,0,0,0,0,0,0,	// 6
};

int main()
{
	int hyunSu = 0;
	for (size_t i = 0; i < 7; ++i)
	{
		if (num[i] == 0)
		{
			hyunSu = i;
			break;
		}
	}

	std::cout << "boss : ";
	for (size_t i = 0; i < 7; ++i)
	{
		if(map[i][hyunSu] == 1)
			std::cout << num[i] << std::endl;
	}
	
	std::cout << "under : ";
	for (size_t i = 0; i < 7; ++i)
	{
		if (map[hyunSu][i] == 1)
			std::cout << num[i] << ' ';
	}



	return 0;
}