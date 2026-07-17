#include <iostream>

using namespace std;

int main()
{
	int input;
	cin >> input;

	int second, forth, count = 0;
	while (input > 0)
	{
		count++;
		int result = input % 10;
		input /= 10;

		switch (count)
		{
		case 2:
			second = result;
			break;

		case 4:
			forth = result;
			break;
		}

	}

	cout << forth * 10 + second + 5 << endl;

	return 0;
}