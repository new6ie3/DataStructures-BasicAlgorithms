#include <iostream>

using namespace std;

class Player
{
public:
	Player(const char* _name, const char _team, int _id, int _score)
		:team(_team), id(_id), score(_score)
	{
		int i = 0;
		while (true)
		{
			name[i] = _name[i];
			if (name[i] == '\0')
				break;
			i++;
		}
	}

	char* GetName() { return name; }
	char GetTeam() { return team; }
	int GetId() { return id; }
	int GetScore() { return score; }
	
private:
	char name[20];
	char team;
	int id;
	int score;
};

class ScoreBoard
{
public:
	ScoreBoard(){}
	
	void SetPlayerArr(Player* player) 
	{
		playerArr[idx] = player;
		idx++;
	}

	void PrintPlayersInfo()
	{
		cout << "[ScoreBoard]" << endl;
		for (int i = 0; i < idx; ++i)
		{
			cout << "- Player: " << playerArr[i]->GetName() << " (Team " << playerArr[i]->GetTeam();
			cout <<  ") Score: " << playerArr[i]->GetScore() << endl;
		}
	}

	void PrintAverage()
	{
		int sum = 0;
		for (int i = 0; i < idx; ++i)
			sum += playerArr[i]->GetScore();

		int avg = sum / idx;
		cout << "Average: " << avg << endl;
	}

private:
	Player* playerArr[10] = {};
	int idx = 0;
};

int main()
{
	Player john("John", 'A', 123456, 80);
	Player mary("Mary", 'B', 123457, 90);
	
	ScoreBoard scoreBoard;
	scoreBoard.SetPlayerArr(&john);
	scoreBoard.SetPlayerArr(&mary);

	scoreBoard.PrintPlayersInfo();
	scoreBoard.PrintAverage();

	return 0l;
}