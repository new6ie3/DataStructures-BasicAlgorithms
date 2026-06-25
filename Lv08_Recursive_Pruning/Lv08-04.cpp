#include <iostream>

using namespace std;

char member[5] = { 'B', 'T', 'S', 'K', 'R' };

constexpr int group = 3;
char path[group] = {};
int visited[5] = {};

int counting = 0;
void Func(int n = 0)
{
	if (n == group)
	{
		if(visited[2] == 1)
			counting++;

		return;
	}

	for (int i = 0; i < 5; ++i)
	{
		if (visited[i] == 1)
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
	Func();
	cout << counting << endl;

	return 0;
}