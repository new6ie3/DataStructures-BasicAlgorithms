#include <iostream>

using namespace std;

char card[5] = { '1', '2', '3', '4', '5' };
char path[4] = {};

int counting = 0;
void Func(int n = 0)
{
	if (n == 4)
	{
		counting++;
		return;
	}

	for (int i = 0; i < 5; ++i)
	{
		int value = 0;

		if(path[0] != 0) 
			value = abs(path[n - 1] - card[i]);

		if (value > 3)
			continue;

		path[n] = card[i];
		Func(n + 1);
		path[n] = 0;
	}

}

int main()
{
	Func();
	cout << counting << endl;

	return 0;
}