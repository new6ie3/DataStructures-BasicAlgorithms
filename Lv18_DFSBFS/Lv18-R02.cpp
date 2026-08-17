#include <iostream>
#include <vector>

std::vector<char> vec;
void Shobou(int person, int level = 0)
{
	if (level == person)
	{
		for (int i = 0; i < vec.size(); ++i)
			std::cout << vec[i];

		std::cout << std::endl;
		return;
	}

	for (int i = 0; i < 2; ++i)
	{
		char ch;
		i == 0 ? ch = 'O' : ch = 'X';
		vec.push_back(ch);
		Shobou(person, level + 1);
		vec.pop_back();
	}
}

int main()
{
	int person = 2;
	std::cin >> person;

	Shobou(person);

	return 0;
}