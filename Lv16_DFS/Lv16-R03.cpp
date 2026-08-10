#include <iostream>

void InputArray(int *ary)
{
	for (size_t i = 0; i < 6; ++i)
		std::cin >> ary[i];
}

void SumArray(int* aryA, int* aryB)
{
	int result[6] = {};
	int addon = 0;
	for (int i = 5; i > -1; --i)
	{
		result[i] = (aryA[i] + aryB[i]) % 10 + addon;
		addon = (aryA[i] + aryB[i]) / 10;
	}

	for (size_t i = 0; i < 6; ++i)
		std::cout << result[i] << ' ';
}

int main()
{
	int aryA[6];
	int aryB[6];

	InputArray(aryA);
	InputArray(aryB);
	SumArray(aryA, aryB);

	return 0;
}