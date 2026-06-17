#include <iostream>

using namespace std;

int main()
{
	char str[3][10];
	cin >> str[0] >> str[1] >> str[2];

	if (strcmp(str[0], str[1]) == 0 && strcmp(str[0], str[2]) == 0 && strcmp(str[1], str[2]) == 0)
		cout << "WOW" << endl;
	else if (strcmp(str[0], str[1]) != 0 && strcmp(str[0], str[2]) != 0 && strcmp(str[1], str[2]) != 0)
		cout << "BAD" << endl;
	else
		cout << "GOOD" << endl;

	return 0;
}