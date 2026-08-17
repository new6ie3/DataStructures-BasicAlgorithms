#include <iostream>
#include <vector>

std::vector<char> path = {};
void Run(std::string persons, int person, int level = 0)
{
	if (level == person)
	{
		for (int i = 0; i < path.size(); ++i)
		{
			std::cout << path[i];
		}
		std::cout << std::endl;
		return;
	}

	for (int i = 0; i < persons.size(); ++i)
	{
		path.push_back(persons[i]);
		Run(persons, person, level + 1);
		path.pop_back();
	}
}

int main()
{
	std::string person = "AGFT";
	int num = 2;

	std::cin >> person >> num;
	Run(person, num);

	return 0;
}