#include <iostream>
#include <vector>

void Sort(std::vector<int>& vec)
{
	for (int i = 0; i < vec.size() - 1; ++i)
	{
		for (int j = 0; j < vec.size() - 1 - i; ++j)
		{
			if (vec[j] > vec[j + 1])
			{
				int temp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < vec.size() - 1; ++i)
	{
		if (vec[i] == 0)
		{
			for (int j = i + 1; j < vec.size(); ++j)
			{
				if (vec[j] != 0)
				{
					int temp = vec[j];
					vec[j] = vec[i];
					vec[i] = temp;

					return;
				}
			}
		}

	}
}

int main()
{
	int n, num;
	std::cin >> n;

	std::vector<int> vec;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> num;
		vec.push_back(num);
	}

	Sort(vec);
	
	for (int i = 0; i < 3; ++i)
		std::cout << vec[i];

	return 0;
}