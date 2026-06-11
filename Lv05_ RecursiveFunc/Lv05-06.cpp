#include <iostream>

using namespace std;

void Func(int a, int b)
{
	cout << a << ' ';

	if (a == b) return;
	Func(a + 1, b);

	cout << a << ' ';
}

int main()
{
	int a, b;
	cin >> a >> b;

	Func(a, b);

	return 0;
}