#include <iostream>

using namespace std;

char path[2] = {};

void Func(int n = 0)
{
	if (n == 2)
	{
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 3; ++i)
	{
		path[n] = 'A' + i;
		Func(n + 1);
		path[n] = 0;
	}
}

int main()
{
	Func();

	return 0;
}