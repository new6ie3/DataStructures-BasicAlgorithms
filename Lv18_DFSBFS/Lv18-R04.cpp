#include <iostream>

int main()
{
	std::string str[3] =
	{
		"1001011",
		"11110",
		"1101110"
	};

	int sum[3] = {};
	for (int i = 0; i < 3; ++i)
	{
		int addon = 0;
		for (int j = str[i].size() - 1; j > -1; --j)
		{
			if (str[i][j] == '1')
			{
				sum[i] += 1 + (2 * addon);
			}
			addon++;
		}
	}
	
	int max = 0;
	for (int i = 1; i < 3; ++i)
	{
		if (sum[max] < sum[i])
			max = i;
	}

	std::cout << str[max];

	return 0;
}