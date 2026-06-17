#include <iostream>

using namespace std;

char path[3] = {};
char input[4] = "AAD";
int counting = 0;

void Func(int n = 0)
{
	if (n == 3)
	{
		counting++;

		if (strcmp(path, input) == 0)
			cout << counting << "¹øÂ°";

		return;
	}

	for (int i = 0; i < 4; ++i)
	{
		path[n] = 'A' + i;
		Func(n + 1);
		path[n] = 0;
	}
}

int main()
{
	cin >> input;
	Func();

	return 0;
}