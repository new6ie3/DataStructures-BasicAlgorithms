#include <iostream>

using namespace std;

char value[] = {'R', 'K', 'F', 'C', 'B', 'I', 'C', 'M'};
int map[8][8] =
{
	0,1,1,1,0,0,0,0,
	0,0,0,0,1,1,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,1,1,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
};

void Run(int now = 0, int level = 0)
{
	cout << value[now];

	for (int i = 0; i < 8; ++i)
	{
		if (map[now][i] == 1)
			Run(i, level + 1);
	}
}

int main()
{
	Run();

	return 0;
}