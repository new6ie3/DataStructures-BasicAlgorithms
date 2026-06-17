#include <iostream>

using namespace std;

char name[4] = { 'B', 'G', 'T', 'K' };
char path[4] = {};

void Func(int level, int n = 0)
{
	if (n == level)
	{
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 4; ++i)
	{
		path[n] = name[i];
		Func(level, n + 1);
		path[n] = 0;
	}
}

int main()
{
	int num;
	cin >> num;

	Func(num);

	return 0;
}