#include <iostream>

int main()
{
	int number = 35421;
	int array[5];
	//while (true)
	//{
	//	std::cin >> number;

	//	if (number > 10000 && number < 89999)
	//		break;
	//}

	int addon = 10000;
	for (int i = 0; i < 5; ++i)
	{
		array[i] = number / addon;
		number -= array[i] * addon;
		addon /= 10;
	}

	for (int i = 4; i > -1; --i)
	{
		std::cout << array[i] + 1;
	}


	return 0;
}