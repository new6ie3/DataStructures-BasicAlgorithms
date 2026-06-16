#include <iostream>

using namespace std;

int level;
int branch;

void Func(int n = 0)
{
	if (n == level) return;

	for (int i = 0; i < branch; ++i)
	{
		Func(n + 1);
	}
}

int main()
{
	cin >> level >> branch;
	Func();

	return 0;
}