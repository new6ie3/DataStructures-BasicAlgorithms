#include <iostream>

char heroes[4] = { 'B', 'I', 'A', 'H' };

int main()
{
	int num = 5;
	std::cin >> num;

	for (int t = num % 4 - 1; t < 4; ++t)
		std::cout << heroes[t] << ' ';

	return 0;
}