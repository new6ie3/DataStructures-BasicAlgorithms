#include <iostream>

using namespace std;

void abc(int n, int count = 0)
{
	if (count >= 3)
	{
		cout << n << ' ';
		return;
	}

	abc(n + 2, ++count);
	cout << n << ' ';
}

int main()
{
	int n;
	cin >> n;

	abc(n);

	return 0;
}