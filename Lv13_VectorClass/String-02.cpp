#include <iostream>

using namespace std;

int Reverse(int num)
{
	num = abs(num);
	int result = 0;
	while (num > 0)
	{
		int remain = num % 10;
		int digit = num;

		while (digit > 10)
		{
			remain *= 10;
			digit /= 10;
		}

		result += remain;
		num /= 10;
	}
	
	return result;
}

int main()
{
	int x = -123;
	cout << Reverse(x) << endl;

	return 0;
}