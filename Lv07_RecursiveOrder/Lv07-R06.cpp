#include <iostream>

using namespace std;

char str[4][10] = 
{
	"kfcmclo",
	"zzzzz",
	"abc",
	"mincoding"
};

int main()
{
	for (size_t i = 0; i < 4; ++i)
		cin >> str[i];

	for (int y = 0; y < 3; ++y)
	{
		for (int x = 1 + y; x < 4; ++x)
		{
			int next_len = strlen(str[y]);
			int cur_len = strlen(str[x]);

			if (cur_len < next_len)
			{
				char temp[10];
				strcpy_s(temp, str[x]);
				strcpy_s(str[x], str[y]);
				strcpy_s(str[y], temp);
			}

		}
	}

	for (size_t i = 0; i < 4; ++i)
		cout << str[i] << endl;

	return 0;
}