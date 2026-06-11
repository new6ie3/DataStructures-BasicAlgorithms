#include <iostream>

using namespace std;

void BBQ(int n)
{
	if (n <= 1) return;

	return BBQ(n - 1);
}

int main()
{
	BBQ(4);

	return 0;
}