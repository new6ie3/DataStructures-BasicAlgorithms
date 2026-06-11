#include <iostream>

using namespace std;

int main()
{
	char input;
	cin >> input;

	for (int i = -3; i <= 3; ++i)
	{
		char ch = input + i;
		if (ch > 'Z') ch -= 26;
		else if (ch < 'A') ch += 26;

		cout << ch;
	}


	return 0;
}