#include <iostream>

int ary[6] = {1, 5, 4, 2, -5, -7};

void Sort_Array()
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = i; j < 5; ++j)
		{
			if (ary[j] < ary[j + 1])
			{
				int temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
};

int main()
{
	int choose = 3;
	std::cin >> choose;

	Sort_Array();
	std::cout << ary[choose - 1];

	return 0;
}