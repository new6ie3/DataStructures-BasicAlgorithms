#include <iostream>

using namespace std;

char path[10] = {};
int num = 3;

void Dice(int n = 0)
{
	if (n == num)
	{
		cout << path << endl;
		return;
	}

	for (int i = 0; i < 6; ++i)
	{
		path[n] = '1' + i;
		Dice(n + 1);
		path[n] = 0;
	}
}

int main()
{
	cin >> num;
	Dice();

	return 0;
}