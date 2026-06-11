#include <iostream>

using namespace std;

void BBQ(int n = 0)
{
	if (n == 2) return;
	BBQ(n + 1);
}

int main()
{
	BBQ();

	return 0;
}