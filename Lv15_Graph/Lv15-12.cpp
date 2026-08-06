#include <iostream>

using namespace std;

int graph[5][5] = 
{
	0, 0, 0, 0, 1,
	1, 0, 0, 0, 0,
	0, 1, 0, 0, 0,
	0, 1, 0, 0, 0,
	0, 0, 0, 0, 0
};

int main()
{
	string names[5] = { "Amy", "Bob", "Chloe", "Diane", "Edger" };
	size_t count[5] = {};
	for (size_t y = 0; y < 5; ++y)
	{
		for (size_t x = 0; x < 5; ++x)
		{
			if (graph[y][x] == 1)
				count[x]++;
		}
	}

	size_t max = 0;
	for (size_t i = 1; i < 5; ++i)
	{
		if (count[max] < count[i])
			max = i;
	}
	
	cout << names[max] << endl;
	

	return 0;
}