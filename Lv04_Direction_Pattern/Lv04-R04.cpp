#include <iostream>

using namespace std;

int arr[4][4] = {};

void FillArray()
{
	char line;
	int idx;
	cin >> line >> idx;

	switch (line)
	{
	case 'G':
		for (size_t i = 0; i < 4; ++i)
			arr[idx][i] = 1;
		break;

	case 'S':
		for (size_t i = 0; i < 4; ++i)
			arr[i][idx] = 1;
		break;
	}
}

int main()
{
	FillArray();
	FillArray();
	FillArray();

	for (size_t i = 0; i < 4; ++i)
	{
		for (size_t j = 0; j < 4; ++j)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}


	return 0;
}