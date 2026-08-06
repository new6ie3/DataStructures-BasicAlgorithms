#include <iostream>
#include <vector>
using namespace std;

int Parsing(string str)
{
	int result = 0;
	int unit = 1;
	for (int i = str.size() - 1; i > -1; --i)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result += (str[i] - '0') * unit;
			unit *= 10;
		}
	}

	return result;
}

int main()
{
	string str = "1999POW";
	cin >> str;

	int value = Parsing(str);
	cout << value + 5 << endl;

	return 0;
}