#include <iostream>

using namespace std;

char member[5] = { 'E', 'W', 'A', 'B', 'C' };
char except_mem = 'E';

char path[4] = {};
int visited[5] = {};

void Func(int n = 0)
{
	if (n == 4)
	{
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 5; ++i)
	{
		if (member[i] == except_mem || visited[i] == 1)
			continue;

		visited[i] = 1;
		path[n] = member[i];

		Func(n + 1);

		path[n] = 0;
		visited[i] = 0;
	}
}

int main()
{
	cin >> except_mem;
	Func();

	return 0;
}