#include <iostream>

using namespace std;

int main()
{
	char str[8];
	cin >> str;

	char bucket[256] = {};
	for (size_t i = 0; i < 8; ++i)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			bucket[str[i]]++;
		}
	}

	int max = 0;
	char maxCh;
	for (size_t i = 0; i < 256; ++i)
	{
		if (max < bucket[i])
		{
			max = bucket[i];
			maxCh = i;
		}
	}

	cout << maxCh << endl;

	return 0;
}