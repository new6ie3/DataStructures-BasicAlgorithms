#include <iostream>

using namespace std;

string Common_Prefix(string strs[], size_t size)
{
    string prefix;

    for (size_t i = 0; i < strs[0].length(); ++i)
    {
        bool same = true;

        for (size_t j = 1; j < size; ++j)
        {
            if (i >= strs[j].length() || strs[0][i] != strs[j][i])
            {
                same = false;
                break;
            }
        }

        if (!same)
            break;

        prefix += strs[0][i];
    }

    return prefix;
}
int main()
{
	string strs[] = { "flower", "flow", "flight" };
	string result = Common_Prefix(strs, 3);

	cout << result << endl;

	return 0;
}