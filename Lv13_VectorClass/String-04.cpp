#include <iostream>

using namespace std;

int* Hashing(const string str)
{
	int* bucket = new int[26] {};
	size_t len = str.length();

	for (size_t i = 0; i < len; ++i)
	{
		bucket[str[i] - 'a']++;
	}

	return bucket;
}

bool Anagram(const string str1, const string str2)
{
	if (str1.length() != str2.length())
		return false;

	int* bucket1 = Hashing(str1);
	int* bucket2 = Hashing(str2);

	for (size_t i = 0; i < 26; ++i)
	{
		if (bucket1[i] != bucket2[i])
		{
			delete[] bucket1;
			delete[] bucket2;

			return false;
		}
	}

	delete[] bucket1;
	delete[] bucket2;
	return true;
}

int main()
{
	string s = "anagram";
	string t = "nagaram";

	Anagram(s, t);

	return 0;
}