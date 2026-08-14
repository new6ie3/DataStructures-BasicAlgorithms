#include <iostream>

using namespace std;

char value[] = { 'M', 'I', 'n', 'C', 'O', 'd', 'E' };
int map[7][7] =
{
	0,1,1,0,0,0,0,
	0,0,0,1,0,0,0,
	0,0,0,0,1,0,0,
	0,0,0,0,0,1,1,
	0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,
};

void Run(int now = 0, int level = 0)
{
	if (value[now] >= 'A' && value[now] <= 'Z')
		cout << value[now] << ' ';

	for (int i = 0; i < 7; ++i)
	{
		if (map[now][i] == 1 && value[i] != '#')
		{
			Run(i, level + 1);
		}
	}
}

int main()
{
	Run();

	return 0;
}