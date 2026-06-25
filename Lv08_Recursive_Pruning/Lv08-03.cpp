#include <iostream>

using namespace std;

constexpr int choice = 3;
char path[choice] = {};

int counting = 0;
void Func(int n = 0)
{
	if (n == choice)
	{
		counting++;
		return;
	}

	for (int i = 0; i < 3; ++i)
	{
		if (path[n - 2] == path[n - 1] && path[n - 1] == 'A' + i)
			continue;

		path[n] = 'A' + i;
		Func(n + 1);
		path[n] = 0;

	}
}

int main()
{
	Func();
	cout << counting << endl;

	return 0;
}