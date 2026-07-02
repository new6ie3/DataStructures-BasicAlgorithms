#include <iostream>

using namespace std;

constexpr int row = 3;
constexpr int col = 4;

char word[20] = {"ABCESEED"};
char path[20] = {};

char str[row][col] =
{
	{'A', 'B', 'C', 'E'},
	{'S', 'F', 'C', 'S'},
	{'A', 'D', 'E', 'E'},
};

int dir[4][2] =
{
	+1, +0,
	-1, +0,
	+0, +1,
	+0, -1
};

bool Solution(int n = 0, int dy = -1, int dx = -1)
{
	if (strcmp(word, path) == 0)
		return true;

	for (int i = 0; i < 4; ++i)
	{
		int nextY = dy + dir[i][0];
		int nextX = dx + dir[i][1];

		if (nextY >= row || nextY < 0 || nextX >= col || nextX < 0)
			continue;

		if (str[nextY][nextX] == word[n])
		{
			path[n] = str[nextY][nextX];

			bool result = Solution(n + 1, nextY, nextX);
			if (result) 
				return true;

			path[n] = 0;
		}
	}

	return false;

}

bool FindFirstWord()
{
	int word_len = strlen(word);

	for (int y = 0; y < row; ++y)
	{
		for (int x = 0; x < col; ++x)
		{
			if (word[0] == str[y][x])
			{
				path[0] = str[y][x];

				bool result = Solution(1, y, x);
				if (result == true)
					return true;

				path[0] = 0;
			}
		}
	}

	return false;
}

int main()
{
	bool result = FindFirstWord();

	if (result) cout << "true" << endl;
	else cout << "false" << endl;

	return 0;
}
