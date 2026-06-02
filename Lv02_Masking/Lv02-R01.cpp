#include <iostream>

using namespace std;

int main()
{
	bool bit[7] = {};
	int vect[7] = { 3, 5, 4, 2, 6, 6, 5 };

	for (int i = 0; i < 7; ++i)
		cin >> bit[i];

	for (int i = 0; i < 7; ++i)
	{
		if (bit[i])
			vect[i] = 7;
		else
			vect[i] = 0;

		cout << vect[i] << ' ';
	}


	return 0;
}