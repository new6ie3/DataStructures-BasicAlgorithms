#include <iostream>

using namespace std;

constexpr int num = 4;
bool field[num][num] = {};

int dir[8][2] =
{
	-1, -1,
	+0, -1,
	+1, -1,

	-1, +0,
	+1, +0,

	-1, +1,
	+0, +1,
	+1, +1
};

bool Check_Queen(int rows, int cols)
{
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < num; ++j)
		{
			int new_rows = rows + dir[i][0] * j;
			int new_cols = cols + dir[i][1] * j;

			if (new_rows >= num || new_rows < 0 || new_cols >= num || new_cols < 0)		// 체스판 밖 제외
				break;

			if (field[new_rows][new_cols] == 1)		// 퀸 공격 범위에 다른 퀸이 있다면 false
				return false;

		}
	}

	return true;
}

void Print_Field()
{
	for (int y = 0; y < num; ++y)
	{
		for (int x = 0; x < num; ++x)
		{
			cout << field[y][x] << ' ';
		}
		cout << endl;
	}
	cout << endl;
}

void Func(int n = 0)
{
	if (n == num)
	{
		Print_Field();
		return;
	}

	for (int i = 0; i < num; ++i)
	{
		bool result = Check_Queen(n, i);	// 새로운 퀸 위치에서 다른 퀸 위치 검색 
		if (!result) continue;

		field[n][i] = 1;
		Func(n + 1);
		field[n][i] = 0;
	}
}

int main()
{
	Func();

	return 0;
}