#include <iostream>

using namespace std;

int bucket[10] = {};
int vect[8] = { 1, 9, 3, 1, 0, 1, 0, 7 };

int main()
{
	for (int i = 0; i < 8; ++i)
		cin >> vect[i];

	for (int i = 0; i < 8; ++i)
		bucket[vect[i]]++;

	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < bucket[i]; ++j)
		{
			cout << i << ' ';
		}
	}

	return 0;
}