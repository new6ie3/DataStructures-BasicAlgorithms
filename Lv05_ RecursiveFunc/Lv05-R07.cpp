#include <iostream>

using namespace std;

int Len(char *str)
{
	for(int i = 0; i < 10; ++i)
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
	for (int i = 0; i < len; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			cout << str[j];
		}
		cout << endl;
	}

	return 0;
}