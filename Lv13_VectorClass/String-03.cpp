#include <iostream>

using namespace std;

int First_Unique_char(string s)
{
	size_t len = s.length();
	for (int i = 0; i < len; ++i)
	{
		bool isUnique = true;
		for (int j = 0; j < len; ++j)
		{
			if (i == j) continue;

			if (s[i] == s[j])
			{
				isUnique = false;
				break;
			}

		}
		if (isUnique) return i;
	}
	
	return -1;
}

int main()
{
	string s = "loveleetcode";
	int index = First_Unique_char(s);

	cout << index << endl;
	cout << s[index] << " 문자가 첫 번째로 한 번만 등장합니다.";
	return 0;
}