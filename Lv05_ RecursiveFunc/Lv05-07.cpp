#include <iostream>

using namespace std;

int arr[8] = { 3, 7, 4, 1, 9, 4, 6, 2 };

void Func(int end, int current = 0)
{
	cout << arr[current] << ' ';

	if (current == end) return;
	Func(end, current + 1);

	cout << arr[current] << ' ';
}

int main()
{
	int index;
	cin >> index;

	Func(index);
	return 0;
}