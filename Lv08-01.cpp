#include <iostream>

using namespace std;

char name[4] = { 'A', 'T', 'K', 'P' };
int visited[4] = {};
char path[3] = {};

void Func(int n = 0)
{
	if (n == 3)
	{
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 4; ++i)
	{
		if (visited[i] == 1)
			continue;

		visited[i] = 1;
		path[n] = name[i];

		Func(n + 1);

		path[n] = 0;
		visited[i] = 0;
	}
}

int main()
{
	Func();

	return 0;
}