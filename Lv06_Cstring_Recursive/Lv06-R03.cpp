#include <iostream>

using namespace std;

char str[256] = "ABCDEFG";

int main()
{
	cin >> str;

	char ch1, ch2;
	cin >> ch1 >> ch2;

	int len = strlen(str);
	for (int i = 0; i < len; ++i)
	{
		if (str[i] == ch1 || str[i] == ch2)
		{
			if(i - 1 >= 0)
				str[i - 1] = '#';

			if(i + 1 < len)
				str[i + 1] = '#';
		}
	}

	cout << str;

	return 0;
}