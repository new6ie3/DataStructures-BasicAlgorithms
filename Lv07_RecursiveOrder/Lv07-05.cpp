#include <iostream>

using namespace std;

int people = 2;
char clean[4] = {};

void Func(int days = 0)
{
	if (days == 4)
	{
		cout << clean << endl;
		return;
	}

	for (int i = 0; i < people; ++i)
	{
		clean[days] = '1' + i;
		Func(days + 1);
		clean[days] = 0;
	}
}

int main()
{
	cin >> people;
	Func();

	return 0;
}