#include <iostream>

using namespace std;

enum direction
{
	left,
	right
};

char str[10] = "ATKPTCABC";

int SearchIndexString(char ch, direction dir)
{
	switch (dir)
	{
	case direction::left:
		for (int i = 0; i < 10; ++i)
		{
			if (str[i] == ch)
				return i;
		}

		break;

	case direction::right:
		for (int i = 9; i > -1; --i)
		{
			if (str[i] == ch)
				return i;
		}
		break;
	}

	return -1;
}

int main()
{
	char a, b;
	cin >> a >> b;

	int idxA = SearchIndexString(a, direction::left);
	int idxB = SearchIndexString(b, direction::right);

	cout << idxB - idxA;

	return 0;
}