#include <iostream>
#include <vector>
using namespace std;

bool ValidSudoku(vector<vector<int>>& sudoku)
{
	for (size_t y = 0; y < 9; ++y)
	{
		int nums[9] = {};

		for (size_t x = 0; x < 9; ++x)
		{
			if (sudoku[y][x] == '.')
				continue;

			int num = sudoku[y][x] - '1';

			if (nums[num] == 1)
				return false;

			nums[num]++;
		}
	}

	for (size_t x = 0; x < 9; ++x)
	{
		int nums[9] = {};

		for (size_t y = 0; y < 9; ++y)
		{
			if (sudoku[y][x] == '.')
				continue;

			int num = sudoku[y][x] - '1';

			if (nums[num] == 1)
				return false;

			nums[num]++;
		}
	}

	for (size_t k = 0; k < 9; ++k)
	{
		int nums[9] = {};

		size_t startY = (k / 3) * 3;
		size_t startX = (k % 3) * 3;

		for (size_t y = startY; y < startY + 3; ++y)
		{
			for (size_t x = startX; x < startX + 3; ++x)
			{
				if (sudoku[y][x] == '.')
					continue;

				int num = sudoku[y][x] - '1';

				if (nums[num] == 1)
					return false;

				nums[num]++;
			}
		}
	}

	return true;
}

int main()
{
	vector<vector<int>> board =
	{ {'5', '3', '.', '.', '7', '.', '.', '.', '.'}
	, {'6', '.', '.', '1', '9', '5', '.', '.', '.'}
	, {'.', '9', '8', '.', '.', '.', '.', '6', '.'}
	, {'8', '.', '.', '.', '6', '.', '.', '.', '3'}
	, {'4', '.', '.', '8', '.', '3', '.', '.', '1'}
	, {'7', '.', '.', '.', '2', '.', '.', '.', '6'}
	, {'.', '6', '.', '.', '.', '.', '2', '8', '.'}
	, {'.', '.', '.', '4', '1', '9', '.', '.', '5'}
	, {'.', '.', '.', '.', '8', '.', '.', '7', '9'} };

	bool ret = ValidSudoku(board);
	cout << ret << endl;

	return 0;
}