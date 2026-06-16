#include <iostream>

using namespace std;

int branch = 4;
int level = 3;
int counting = 0;

void Func(int n = 0)
{
	counting++;
	if (n == level) return;

	for (int i = 0; i < branch; ++i)
	{
		Func(n + 1);
	}
}

int main()
{
	cin >> branch >> level;
	Func();
	cout << counting;

	return 0;
}