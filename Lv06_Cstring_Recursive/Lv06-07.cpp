#include <iostream>

using namespace std;

char str[256];

void Func(int n)
{
	cout << n << ' ';
	if (n == 1) return;

	Func(n - 1);
	cout << n << ' ';
}

int main()
{
	cin >> str;

	int len = strlen(str);
	Func(len);

	return 0;
}