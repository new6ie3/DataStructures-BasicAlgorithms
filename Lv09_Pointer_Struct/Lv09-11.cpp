#include <iostream>

using namespace std;

int example1[4][4] =
{
	0, 1, 1, 0,
	0, 2, 2, 1,
	2, 3, 3, 2,
	3, 3, 3, 2,
};

int example2[4][4] =
{
	0, 0, 0, 0,
	0, 1, 1, 0,
	2, 2, 3, 0,
	1, 3, 3, 1,
};

void Result_Array(int arr[4][4])
{
	bool result = true;
	for (int y = 0; y < 3; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			if (arr[y][x] > arr[y + 1][x])
			{
				result = false;
				y = 3;
				break;
			}
		}
	}

	if (result)
		cout << "안전한성" << endl;
	else
		cout << "안전하지않은성" << endl;
}

int main()
{
	Result_Array(example1);
	Result_Array(example2);

	return 0;
}