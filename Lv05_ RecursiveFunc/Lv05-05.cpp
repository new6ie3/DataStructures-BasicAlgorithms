#include <iostream>

using namespace std;

char str[5] = { 'a', 'b', 'c', 'd', 'e' };

void Print(int idx = 0)
{
	cout << str[idx];
	if (idx == 4)
	{
		cout << endl;
		cout << str[idx];
		return;
	}

	Print(idx + 1);
	cout << str[idx];
}

int main()
{
	for (int i = 0; i < 5; ++i)
		cin >> str[i];

	Print();

	return 0;
}