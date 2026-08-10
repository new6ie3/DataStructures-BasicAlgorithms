#include <iostream>

char node[10] = " ADFZCGQH";

bool FindParents(char parents, char child)
{
	size_t child_idx;
	for (size_t i = 0; i < 10; ++i)
	{
		if (node[i] == child)
		{
			child_idx = i;
			break;
		}
	}

	return node[child_idx / 2] == parents;
}

int main()
{
	char parents, child;
	std::cin >> child >> parents;

	bool result = FindParents(parents, child);
	result ? std::cout << "부모자식관계" : std::cout << "아님";

	return 0;
}