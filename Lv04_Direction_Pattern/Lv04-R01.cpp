#include <iostream>

using namespace std;

void BBQ(int* pa, int* pb)
{
	*pa = INT_MIN;
	*pb = INT_MAX;

	int arr[5];
	for (int i = 0; i < 5; ++i)
	{
		cin >> arr[i];
		if (arr[i] > *pa)
			*pa = arr[i];

		if (arr[i] < *pb)
			*pb = arr[i];
	}

}


int main()
{
	int a, b;
	BBQ(&a, &b);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	return 0;
}