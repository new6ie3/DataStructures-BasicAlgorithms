#include <iostream>

using namespace std;

int _floor[] = {3, 1, 2, 1, 3, 2, 1, 2, 1, 0 };
void Jump(int n)
{
	if (_floor[n - 1] == 0)
	{
		cout << "도착 ";
		return;
	}
	else
		cout << _floor[n - 1] << ' ';

	Jump(n + _floor[n - 1]);

	cout << _floor[n - 1] << ' ';
}

int main()
{
	int n;
	cin >> n;

	cout << "시작 ";
	Jump(n);
	cout << "시작 ";

	return 0;
}