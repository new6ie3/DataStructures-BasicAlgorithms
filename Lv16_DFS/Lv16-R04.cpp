#include <iostream>

bool IsPlusArray(int* ary)
{
	int num = ary[0];
	for (size_t i = 1; i < 5; ++i)
	{
		if (num > ary[i])
			return false;

		num = ary[i];
	}

	return true;
}

int main()
{
	int ary[5];
	for (size_t i = 0; i < 5; ++i)
	{
		std::cin >> ary[i];
	}
	
	bool result = IsPlusArray(ary);

	if (result)
		std::cout << "Áõ°¡µÊ";
	else
		std::cout << "Áõ°¡¾ÈµÊ";

	return 0;
}