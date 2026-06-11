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

bool IsSame(char* str, int len)
{
	if (len % 2 == 1) return false;
	int half = len / 2;

	for (int i = 0; i < half; ++i)
	{
		if (str[i] != str[half + i])
			return false;
	}

	return true;
}

int main()
{
	char str[10];
	cin >> str;

	int len = Len(str);
	bool result = IsSame(str, len);

	if (result) cout << "동일한 문장";
	else cout << "다른 문장";

	return 0;
}