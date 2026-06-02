#include <iostream>

using namespace std;

int levelTable[4][2] =
{
	10, 20,
	30, 60,
	100, 150,
	200, 300
};

int level[4] = {};

int main()
{

	int input[6];
	for (int i = 0; i < 6; ++i)
	{
		cin >> input[i];
		for (int j = 0; j < 4; ++j)
		{
			if (levelTable[j][0] <= input[i] && levelTable[j][1] >= input[i])
				level[j] += 1;
		}
	}

	for (int i = 0; i < 4; ++i)
		cout << "lev" << i << ':' << level[i] << endl;


	return 0;
}