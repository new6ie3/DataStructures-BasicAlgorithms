#include <iostream>

std::string names[3] = {"bob", "jason", "tom"};
std::string path[3] = {};
void Run(int level = 0)
{
	if (level == 3)
	{
		for (size_t i = 0; i < 3; ++i)
		{
			std::cout << path[i] << ' ';
		}
		std::cout << std::endl;
		return;
	}

	for (size_t i = 0; i < 3; ++i)
	{
		path[level] = names[i];
		Run(level + 1);
		path[level] = "";
	}
}

int main()
{
	for (size_t i = 0; i < 3; ++i)
		std::cin >> names[i];

	Run();

	return 0;
}