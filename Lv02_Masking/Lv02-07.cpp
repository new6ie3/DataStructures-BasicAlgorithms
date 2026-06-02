#include <iostream>

using namespace std;

int Find(char* str, char target)
{
	for (int i = 0; i < 7; ++i)
	{
		if (str[i] == target)
			return 1;
	}

	return 0;
}

int main()
{
	char vect[7] = "BTKIGZ";
	char target[4];

	int count = 0;
	for (int i = 0; i < 4; ++i)
	{
		cin >> target[i];
		count += Find(vect, target[i]);
	}

	cout << count << endl;

	return 0;
}