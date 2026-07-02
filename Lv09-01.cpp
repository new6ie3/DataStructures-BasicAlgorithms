#include <iostream>

using namespace std;

char phoneArr[3][3][5] =
{
	"_", "abc", "def",
	"ghi", "jkl", "mno",
	"pqrs", "tuv", "wxyz",
};

char input[9] = "23";
char path[9] = {};
int input_len = 0;

void Func(int n = 0)
{
	if (n == input_len)
	{
		cout << path << ' ';
		return;
	}

	int nArr_len = strlen(phoneArr[(input[n] - '0' - 1) / 3][(input[n] - '0' - 1) % 3]);
	for (int i = 0; i < nArr_len; ++i)
	{
		path[n] = phoneArr[(input[n] - '0' - 1) / 3][(input[n] - '0' - 1) % 3][i];
		Func(n + 1);
		path[n] = 0;
	}

}

int main()
{
	cin >> input;
	input_len = strlen(input);
	Func();

	return 0;
}
