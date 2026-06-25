#include <iostream>

using namespace std;

int arr[8] = { 4, 1, 7, 9, 6, 3, 3, 6 };

void Swap(int *pa, int *pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main()
{
	int* pa = nullptr;
	int* pb = nullptr;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 1; j < 7; ++j)
		{
			if (arr[0] < arr[j])
			{
				pa = &arr[j];
				break;
			}
		}

		for (int j = 7; j > 0; --j)
		{
			if (arr[0] > arr[j])
			{
				pb = &arr[j];
				break;
			}
		}

		if (pa > pb)		// 주소 위치로 비교
		{
			pa = &arr[0];
			i = 4;
		}

		Swap(pa, pb);
	}

	for (int i = 0; i < 8; ++i)
		cout << arr[i] << ' ';

	return 0;
}