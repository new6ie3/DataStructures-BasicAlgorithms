#include <iostream>

using namespace std;

bool SearchGhost(char* str)
{
	int i = 0;
	int IdxG = 0;
	char ghost[6] = "GHOST";

	while (str[i] != '\0')
	{
		while (ghost[IdxG] == str[i])
		{
			i++;
			IdxG++;

			if (ghost[IdxG] == '\0')
				return true;
		}

		IdxG == 0;
		i++;
	}

	return false;
}

int main()
{
	char str[20] = {};
	cin >> str;

	bool result = SearchGhost(str);

	if (result) cout << "존재";
	else cout << "존재하지 않음";

	return 0;
}