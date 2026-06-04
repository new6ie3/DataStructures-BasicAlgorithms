#include <iostream>

using namespace std;

void InputArray(bool arr[5])
{
	for (int i = 0; i < 5; ++i)
	{
		cin >> arr[i];
	}
}

int main()
{
	bool up[5];
	bool down[5];

	InputArray(up);
	InputArray(down);

	int count = 0;
	for (int i = 0; i < 5; ++i)
	{
		if (up[i] && down[i])
			count++;
	}
	cout << count << "°³";

	return 0;
}
