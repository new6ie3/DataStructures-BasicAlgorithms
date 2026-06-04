#include <iostream>

using namespace std;

char str[2][3] =
{
	'G', 'K', 'G'
};

bool Counting(int *bucket)
{
	for (int i = 0; i < 256; ++i)
	{
		if (bucket[i] >= 3)
			return true;
	}

	return false;
}

int main()
{
	cin >> str[1][0] >> str[1][1] >> str[1][2];

	int bucket[256] = {};
	for (int i = 0; i < 6; ++i)
		bucket[str[i / 3][i % 3]]++;

	bool result = Counting(bucket);

	if (result)
		cout << "있음";
	else cout << "없음";

	return 0;
}