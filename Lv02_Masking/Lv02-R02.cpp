#include <iostream>

using namespace std;

bool IsSame(int* password, int* arr)
{
	for (int i = 0; i < 4; ++i)
	{
		if (password[i] != arr[i])
			return false;
	}
	return true;
}

int main()
{
	int password[4] = { 3, 7, 4, 9 };
	int input[4];
	for (int i = 0; i < 4; ++i)
		cin >> input[i];

	bool result = IsSame(password, input);

	if (result)
		cout << "pass" << endl;
	else cout << "fail" << endl;

	return 0;
}