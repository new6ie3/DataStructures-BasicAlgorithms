#include <iostream>

using namespace std;

bool Palindrowm(string str)
{
	size_t len = str.length();
	size_t left = 0;
	size_t right = len - 1;

	while (left < right)
	{
		if (str[left] >= 'A' && str[left] <= 'Z')
			str[left] += 32;

		if (str[right] >= 'A' && str[right] <= 'Z')
			str[right] += 32;


		if (!(str[left] >= 'a' && str[left] <= 'z' || str[left] >= '0' && str[left] <= '9'))
		{
			str[left] = 0;
			left++;
			continue;
		}

		if (!(str[right] >= 'a' && str[right] <= 'z' || str[right] >= '0' && str[right] <= '9'))
		{
			str[right] = 0;
			right--;
			continue;
		}

		if (str[left] != str[right])
			return false;

		left++;
		right--;
	}

	return true;
}

int main()
{
	string s = "A man, a plan, a canal: Panama";
	bool result = Palindrowm(s);

	cout << result << endl;
	return 0;
}