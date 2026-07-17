#include <iostream>

using namespace std;

char str[10] = {"BBBFBFFF"};

int main()
{
	bool result = true;
	int count = 0;
	
	for (int i = 0; i < 10; ++i)
	{

		switch (str[i])
		{
		case 'B':
			count++;
			break;

		case 'F':
			count--;
			break;
		}

		if (count < 0)
		{
			result = false;
			break;
		}

	}
	
	if (count != 0)
		result = false;

	if (result)
		cout << "Â¦ÀÌ ¸ÂÀ½";
	else cout << "Â¦ÀÌ ¾È ¸ÂÀ½";

	return 0;
}