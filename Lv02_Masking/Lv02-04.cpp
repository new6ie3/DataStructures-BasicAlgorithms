#include <iostream>

using namespace std;

bool IsExist(int* arr, int data)
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (arr[j + i * 3] == data)
				return true;
		}
	}

	return false;
}

int main()
{
	int arr[3][3] =
	{
		3, 5, 9,
		4, 2, 1,
		5, 1, 5
	};

	int input[3];
	cin >> input[0] >> input[1] >> input[2];

	for (int i = 0; i < 3; ++i)
	{
		bool flag = IsExist((int*)arr, input[i]);

		if (flag)
			cout << input[i] << ":존재" << endl;
		else
			cout << input[i] << ":미발견" << endl;
	}

	return 0;
}