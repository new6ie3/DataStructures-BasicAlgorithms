#include <iostream>

using namespace std;


int main()
{
	char str[10];
	cin >> str;
	
	char hash[256] = {};
	for (int i = 0; i < 10; ++i)
	{
		if (str[i] == '\0')
			break;

		hash[str[i]]++;
	}

	int count = 0;
	char maxCh;
	for (int i = 'A'; i < 'Z'; ++i)
	{
		if (count < hash[i])
		{
			count = hash[i];
			maxCh = (char)i;
		}
	}

	cout << maxCh;

	return 0;
}