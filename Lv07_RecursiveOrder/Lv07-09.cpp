#include <iostream>

using namespace std;

char password[5][10] =
{
	"Jason",
	"Dr.tom",
	"EXEXI",
	"GK12P",
	"POW"
};

int main()
{
	char input[10];
	cin >> input;

	for (int i = 0; i < 5; ++i)
	{
		if (strcmp(input, password[i]) == 0)
		{
			cout << "암호해제" << endl;
			return 0;
		}
	}
	
	cout << "암호틀림" << endl;
	return 0;
}