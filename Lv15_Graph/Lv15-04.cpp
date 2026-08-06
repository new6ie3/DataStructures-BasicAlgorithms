#include <iostream>

using namespace std;

int bucket[28] = {};

int main()
{
	char str[10] = "AGGABC";
	cin >> str;
	
	int count = 0;
	for (int i = 0; i < 10; ++i)
	{
		if (str[i] == 0) 
			break;

		if (bucket[str[i] - 'A'] != 0)
			continue;

		bucket[str[i] - 'A']++;
		count++;
	}

	cout << count << "Á¾·ù" << endl;

	return 0;
}