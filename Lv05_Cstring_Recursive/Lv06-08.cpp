#include <iostream>

using namespace std;

int y = 5;
int x = 5;

int main()
{
	int num;
	cin >> num;

	for (int i = 0; i < num; ++i)
	{
		char input[10];
		cin >> input;

		if (strcmp(input, "up") == 0)			y -= 1;
		else if (strcmp(input, "down") == 0)	y += 1;
		else if (strcmp(input, "left") == 0)	x -= 1;
		else if (strcmp(input, "right") == 0)	x += 1;
		else if (strcmp(input, "click") == 0)
			cout << '(' << y << ',' << x << ')' << endl;

	}

	return 0;
}