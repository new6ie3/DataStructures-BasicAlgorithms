#include <iostream>

using namespace std;

constexpr int max_length = 6;

int nums[max_length] = {};
int len = 0;

char path[max_length] = {};


void Func(int n = 0)
{
	if (n == len)
	{
		cout << '[' << path << ']';

		return;
	}

	for (int i = 0; i < len; ++i)
	{
		bool result = false;
		for (int j = 0; j < n; ++j)
		{
			if (path[j] == nums[i] + '0')
			{
				result = true;
				break;
			}
		}

		if (result == true) continue;

		path[n] = nums[i] + '0';
		Func(n + 1);
		path[n] = 0;
	}
}

int main()
{
	int i = 0;

go:
	cout << "Input -10 ~ 10 numbers (0 : exit)";
	do
	{
		cin >> nums[i];
		if (nums[i] == 0 || nums[i] < -10 || nums[i] > 10)
		{
			nums[i] = 0;
			break;
		}

		i++;
	} while (i < max_length);

	len = i;

	for (int j = 0; j < len; ++j)
	{
		for (int k = j + 1; k < len; ++k)
		{
			if (nums[j] == nums[k])
				goto go;
		}
	}


	Func();

	return 0;
}
