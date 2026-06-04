#include <iostream>

using namespace std;

int main()
{
	char cardList[15];
	cin >> cardList;

	int bucket[256] = {};
	for (int i = 0; i < 15; ++i)
	{
		if (cardList[i] == '\0')
			break;

		bucket[cardList[i]]++;
	}

	int count = 0;
	for (int i = 0; i < 256; ++i)
	{
		if (bucket[i])
			count++;
	}
	cout << count << "°³" << endl;

	return 0;
}