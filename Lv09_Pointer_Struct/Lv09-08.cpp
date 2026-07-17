#include <iostream>

using namespace std;

int main()
{
	int arr[7] = { 3, 5, 5, 6, 9, 1, 2 };
	int start, end;
	cin >> start >> end;
	
	int half = (end - start + 1) * 0.5f;

	for (size_t i = 0; i < half; i++)
	{
		int temp = arr[start + i];
		arr[start + i] = arr[end - i];
		arr[end - i] = temp;
	}

	for (size_t i = 0; i < 7; i++)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}