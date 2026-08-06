#include <iostream>

using namespace std;

bool Checking(string str)
{
	int unit = 0;
	
	for (size_t i = 0; i < str.size(); ++i)
	{
		if (str[i] == '<')
			unit++;

		if (str[i] == '>')
			unit--;
	}

	return unit == 0;
}

int main()
{
	string str = "<35<6<912>>10>";
	bool result = Checking(str);

	result ? cout << "정상" : cout << "비정상";

	return 0;
}