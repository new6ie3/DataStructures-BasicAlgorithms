#include <iostream>

using namespace std;

int via[4] = {};
char path[4] = {};

void Card(int num, int n = 0)
{
	if (n == num)
	{
		cout << path << endl;
		return;
	}

	for (size_t i = 0; i < 4; ++i)
	{
		if (via[i] == 1)
			continue;

		via[i] = 1;
		path[n] = i + 'A';
		Card(num, n + 1);
		path[n] = 0;
		via[i] = 0;
	}
}

int main()
{
	int input;
	cin >> input;
	Card(input);

	return 0;
}