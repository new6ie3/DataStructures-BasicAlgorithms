#include <iostream>

using namespace std;

int strstr(string haystack, string needle)
{
	size_t stack_len = haystack.length();
	size_t needle_len = needle.length();
	
	int idx = 0;
	int count = 0;
	for (size_t i = 0; i < stack_len; ++i)
	{
		if (haystack[i] == needle[i % needle_len])
		{
			count++;
			if (count >= needle_len) return idx;
			continue;
		}

			idx = i;
			count = 0;
	}

	return -1;
}


int main()
{
	string haystack = "leetcode";
	string needle = "code";

	int result = strstr(haystack, needle);
	cout << result << endl;
	return 0;
}