#include <iostream>

void Func(char* str)
{
	int bucket[28] = {};
	for (size_t i = 0; i < 10; ++i)
	{
		if (str[i] != 0)
			bucket[str[i] - 'A']++;
	}

	for (size_t i = 0; i < 28; ++i)
	{
		if (bucket[i] == 0 || bucket[i] == 1)
			continue;

		std::cout << char(i + 'A');
	}
}

int main()
{
	char str[10];
	std::cin >> str;

	Func(str);

	return 0;
}