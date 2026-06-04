#include <iostream>

using namespace std;

char vect[7] = "CODING";
char bucket[256] = {};

bool DAT(char ch)
{
	for (size_t i = 0; i < 7; ++i)
	{
		if (vect[i] == ch && bucket[vect[i]])
			return true;
	}

	return false;
}

int main()
{
	size_t n;
	cin >> n;

	char str[10] = {};

	for (size_t i = 0; i < n; ++i)
	{
		char ch;
		cin >> ch;

		bucket[ch]++;
		str[i] = ch;
	}

	for (size_t i = 0; i < n; ++i)
	{
		bool result = DAT(str[i]);
		if (result) cout << 'O';
		else cout << 'X';
	}

	return 0;
}