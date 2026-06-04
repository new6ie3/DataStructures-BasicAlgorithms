#include <iostream>

using namespace std;

int train[8] = { 3, 7, 6, 4, 2, 9, 1, 7 };

bool Pattern(int arr[3], int startIdx)
{
	for (int i = 0; i < 3; ++i)
	{
		if (arr[i] != train[i + startIdx])
			return false;
	}

	return true;
}

int main()
{
	int team[3];
	cin >> team[0] >> team[1] >> team[2];

	for (int i = 0; i < 6; ++i)
	{
		bool result = Pattern(team, i);

		if (result == true)
		{
			cout << i << "¹ø~" << i + 2 << "¹ø Ä­";
			break;
		}
	}

	return 0;
}