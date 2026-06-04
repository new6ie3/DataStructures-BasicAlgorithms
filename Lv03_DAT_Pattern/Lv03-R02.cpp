#include <iostream>

using namespace std;

bool IsSame(int* bucket)
{
	for (int i = 0; i < 10; ++i)
	{
		if (bucket[i] > 1)
			return true;
	}
	return false;
}

int main()
{
	int arr[6];
	int bucket[10] = {};
	for (int i = 0; i < 6; ++i)
	{
		cin >> arr[i];
		bucket[arr[i]]++;
	}

	bool result = IsSame(bucket);

	if (result)
		cout << "도플갱어 발견";
	else cout << "미발견";

	return 0;
}