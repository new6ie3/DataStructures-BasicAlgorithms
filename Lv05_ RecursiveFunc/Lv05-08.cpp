#include <iostream>

using namespace std;

void Div(int n)
{
	if (n == 0) return;
	Div(n / 2);

	cout << n << ' ';
}

int main()
{
	int n;
	cin >> n;

	Div(n);

	return 0;
}