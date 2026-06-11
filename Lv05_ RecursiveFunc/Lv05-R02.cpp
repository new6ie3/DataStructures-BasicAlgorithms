#include <iostream>

using namespace std;

int Len(char str[10])
{
	for (int i = 0; i < 10; ++i)
	{
		if (str[i] == '\0')
			return i;
	}

	return 10;
}

int main()
{
	char str[10];
	cin >> str;

	int len = Len(str);

	for (int i = len - 1; i > -1; --i)
	{
		for (int j = i; j <= len - 1; ++j)
		{
			cout << str[j];
		}
		cout << endl;
	}

	return 0;
}