#include <iostream>

using namespace std;

int bucket[256];

int main()
{
	char str[11];
	cin >> str;

	size_t i = 0;
	while (str[i] != '\0')
	{
		bucket[str[i]]++;
		i++;
	}

	for (i = 'A'; i <= 'Z'; ++i)
	{
		if (bucket[i])
		{
			cout << (char)i;
		}
	}


	return 0;
}