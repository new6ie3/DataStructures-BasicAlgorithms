#include <iostream>

using namespace std;

int building[5][3] =
{
	15, 18, 17,
	4, 6, 9,
	10, 1, 3,
	7, 8, 9,
	15, 2, 6
};

bool IsPattern(int* arr, int line)
{
	for (int j = 0; j < 3; ++j)
	{
		if (arr[j] != building[line][j])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int family[3];
	cin >> family[0] >> family[1] >> family[2];


	for (int i = 4; i > -1; --i)
	{
		bool result = IsPattern(family, i);

		if (result)
		{
			cout << 5 - i << "Ãþ";
			break;
		}
	}


	return 0;
}