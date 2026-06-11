#include <iostream>

using namespace std;

int arr[7] = { 3, 5, 7, 1, 4, 2, 8 };

void PrintArray(int floor)
{
	for (int i = 0; i < floor + 3; ++i)
	{
		cout << arr[i];
	}
	cout << endl;
}

int main()
{
	for (int i = 0; i < 7; ++i)
		cin >> arr[i];

	PrintArray(1);
	PrintArray(2);
	PrintArray(3);
	PrintArray(4);


	return 0;
}