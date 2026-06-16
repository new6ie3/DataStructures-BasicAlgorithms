#include <iostream>

using namespace std;

int level;

void Func(int n = 0)
{
	cout << n;
	if (n == level) return;

	Func(n + 1);
	Func(n + 1);
}

int main()
{
	cin >> level;
	Func();

	return 0;
}