#include <iostream>

using namespace std;

bool IsExist(int* arr, int target)
{
	for (size_t i = 0; i < 6; ++i)
	{
		if (arr[i] == target)
			return true;
	}

	return false;
}

int main()
{
	int arr[6] = { 3, 7, 4, 1, 2, 6 };

	int univer[2][2];
	cin >> univer[0][0] >> univer[0][1];
	cin >> univer[1][0] >> univer[1][1];

	for (size_t i = 0; i < 2; ++i)
	{
		for (size_t j = 0; j < 2; ++j)
		{
			bool result = IsExist(arr, univer[i][j]);
			
			if (result)
				cout << "OK ";
			else
				cout << "NO ";
		}
		cout << endl;
	}

	return 0;
}