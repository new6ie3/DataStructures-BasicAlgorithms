#include <iostream>

using namespace std;

int visited[5] = {};
int map[5][5] =
{
	0,1,1,0,0,
	1,0,0,1,1,
	1,0,0,0,0,
	0,1,0,0,0,
	0,1,0,0,0,
};

void DFS(const char* str, int n = 0)
{
	cout << str[n];
	for (int i = 0; i < 5; ++i)
	{
		if (map[n][i] == 1 && visited[i] == 0)
		{
			visited[i] = 1;
			DFS(str, i);
		}
	}
}

int main()
{
	char str[5];
	for (int i = 0; i < 5; ++i)
		cin >> str[i];

	visited[0] = 1;
	DFS(str);

	return 0;
}