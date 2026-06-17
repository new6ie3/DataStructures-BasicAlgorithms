#include <iostream>

using namespace std;

string str[4] =
{
	"apple",
	"microsoft",
	"google",
	"xiaomi"
};

int main()
{
	for (int i = 0; i < 4; ++i)
		cin >> str[i];

	int max = INT_MIN;
	int min = INT_MAX;
	int max_idx, min_idx;

	for (int i = 0; i < 4; ++i)
	{
		int len = str[i].length();
		if (len > max)
		{
			max = len;
			max_idx = i;
		}

		if (len < min)
		{
			min = len;
			min_idx = i;
		}
	}

	cout << "긴 문장 : " << max_idx << endl;
	cout << "짧은 문장 : " << min_idx << endl;

	return 0;
}