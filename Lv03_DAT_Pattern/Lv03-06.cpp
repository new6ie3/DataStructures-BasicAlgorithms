#include <iostream>

using namespace std;

char str[5][3] =
{
	'A', 'B', 'C',
	'A', 'G', 'H',
	'H', 'I', 'J',
	'K', 'A', 'B',
	'A', 'B', 'C'
};


int main()
{
	int bucket[256] = {};

	for (int i = 0; i < 15; ++i)
		bucket[str[i / 3][i % 3]]++;

	for (int i = 'A'; i < 'Z'; ++i)
	{
		for(int j = 0; j < bucket[i]; ++j)
			cout << (char)i;
	}

	return 0;
}