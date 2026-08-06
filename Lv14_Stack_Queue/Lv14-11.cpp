#include <iostream>

using namespace std;

void CMD(string cmd, string& text, size_t pos)
{
	for (size_t i = 0; i < cmd.size(); ++i)
	{
		switch (cmd[i])
		{
		case 'L':
			pos--;
			break;

		case 'R':
			pos++;
			break;

		case 'D':
			for (size_t p = pos; p < text.size(); ++p)
				text[p] = text[p + 1];
			break;
		}
	}

	cout << pos;
}

int main()
{
	string text = "ABCDEF";
	size_t cursor = 2;

	string cmd = "RRLD";
	CMD(cmd, text, cursor);

	return 0;
}