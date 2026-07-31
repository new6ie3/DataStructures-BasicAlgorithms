#include <iostream>

using namespace std;

int MyAtoi(string str)
{
	size_t len = str.length();
	bool sign = true;
	int result = 0;

	for (size_t i = 0; i < len; ++i)
	{
		if (str[i] == ' ')
			continue;
		else if (str[i] == '-')
		{
			sign = false; 
			continue;
		}
		else if(!(str[i] >= '0' && str[i] <= '9'))
			break;

		result *= 10;
		result += str[i] - '0';
	}

	if (sign == false)
		return result * -1;

	return result;
}

int main()
{
	string str = "-01337c0d2";
	int result = MyAtoi(str);

	cout << result << endl;
	return 0;
}