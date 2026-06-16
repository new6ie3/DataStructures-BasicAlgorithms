#include <iostream>

using namespace std;

char id[] = "qlqlaqkq";
char pw[] = "tkaruqtkf";

int main()
{
	char _id[20];
	char _pw[20];

	cin >> _id >> _pw;

	if (strcmp(id, _id) == 0 && strcmp(pw, _pw) == 0)
		cout << "LOGIN";
	else
		cout << "INVALID";

	return 0;
}