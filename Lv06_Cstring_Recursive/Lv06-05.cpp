#include <iostream>

using namespace std;

char str[3][10] = { "KFC", "ABCDEFG", "BBQ" };

void Swap()
{
	int max = 0;
	int idx;
	for (int i = 0; i < 3; ++i)
	{
		if (max < strlen(str[i]))
		{
			max = strlen(str[i]);
			idx = i;
		}
	}

	char temp[10];
	strcpy_s(temp, str[0]);
	strcpy_s(str[0], str[idx]);
	strcpy_s(str[idx], temp);
}

int main()
{
	cin >> str[0] >> str[1] >> str[2];

	Swap();

	for (int i = 0; i < 3; ++i)
	{
		cout << str[i] << endl;
	}

	return 0;
}