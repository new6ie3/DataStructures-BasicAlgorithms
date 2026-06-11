#include <iostream>

using namespace std;

int arr[6] = { 3, 5, 4, 6, 2, 9 };

void Back(int idx)
{
	cout << arr[idx] << ' ';

	if (idx == 5) return;
	Back(idx + 1);

	cout << arr[idx] << ' ';
}

int main()
{
	for (int i = 0; i < 6; ++i)
		cin >> arr[i];

	Back(0);

	return 0;
}