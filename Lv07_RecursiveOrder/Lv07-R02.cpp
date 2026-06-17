#include <iostream>

using namespace std;

int people = 3;
char date[256];
char path[] = { 'O', 'X' };

void Func(int n = 0)
{
	if (n == people)
	{
		cout << date << endl;
		return;
	}

	for (int i = 0; i < 2; ++i)		// O, X;
	{
		date[n] = path[i % 2];
		Func(n + 1);
		date[n] = 0;
	}
}

int main()
{
	cin >> people;

	Func();
	return 0;
}