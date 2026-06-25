#include <iostream>

using namespace std;

char str[4] = { 'B', 'O', 'T', 'T' };
char path[4] = {};

int counting = 0;
void Func(int n = 0)
{
	if (n == 4)
	{
		counting++;
		return;
	}

	for (int i = 0; i < 4; ++i)
	{
		if (path[n - 1] == 'B' && str[i] == 'T' || path[n - 1] == 'T' && str[i] == 'B')
			continue;

		path[n] = str[i];
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