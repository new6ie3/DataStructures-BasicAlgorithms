#include <iostream>

using namespace std;

char location[2] = {};
char pattern[] = "ABC";

void Func(int n = 0)
{
	if (n == 2) return;
	for (int i = 0; i < 3; ++i)
	{
		location[n] = pattern[i];
		Func(n + 1);
		location[n] = 0;
	}
}

int main()
{
	Func();

	return 0;
}