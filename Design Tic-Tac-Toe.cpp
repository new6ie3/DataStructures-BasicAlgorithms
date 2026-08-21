#include <iostream>

using namespace std;

class TicTacToe
{
public:
	TicTacToe(int n) : size(n)
	{
		board = new char* [n];
		for (int i = 0; i < n; ++i)
		{
			board[i] = new char[n];

			for (int j = 0; j < n; ++j)
			{
				board[i][j] = '_';
			}
		}


	}

	~TicTacToe()
	{
		for (int i = 0; i < size; ++i)
		{
			delete[] board[i];
		}
		delete[] board;
	}

	int Move(int row, int col, int player)
	{
		board[row][col] = (player == 1) ? 'X' : 'O';

		PrintBoard();

		if (Solution(player) == true)
		{
			cout << "플레이어 " << player << "승리!";
			return player;
		}

		else return 0;
	}
	
	bool Solution(int player)
	{
		char target = (player == 1) ? 'X' : '0';
		for (int i = 0; i < size; ++i)
		{
			bool win = true;
			for (int j = 0; j < size; ++j)
			{
				if (board[i][j] != target)
				{
					win = false;
					break;
				}
			}

			if (win)
				return true;
		}

		for (int i = 0; i < size; ++i)
		{
			bool win = true;
			for (int j = 0; j < size; ++j)
			{
				if (board[j][i] != target)
				{
					win = false;
					break;
				}
			}

			if (win)
				return true;
		}

		bool win = true;
		for (int i = 0; i < size; ++i)
		{
			if (board[i][i] != target)
			{
				win = false;
				break;
			}
		}

		if (win)
			return true;

		win = true;
		for (int i = 0; i < size; ++i)
		{
			if (board[i][size - 1 - i] != target)
			{
				win = false;
				break;
			}
		}

		if (win)
			return true;

		return false;
	}

	void PrintBoard()
	{
		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				cout << board[i][j];
			}
			cout << endl;
		}

		cout << endl;
	}

private:
	char** board;
	int size;
};

int main()
{
	TicTacToe tictactoe(3);
	tictactoe.PrintBoard();

	tictactoe.Move(0, 0, 1);
	tictactoe.Move(0, 2, 2);
	tictactoe.Move(2, 2, 1);
	tictactoe.Move(1, 1, 2);
	tictactoe.Move(2, 0, 1);
	tictactoe.Move(1, 0, 2);
	tictactoe.Move(2, 1, 1);

	return 0;
}