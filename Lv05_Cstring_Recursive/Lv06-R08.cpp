#include <iostream>

using namespace std;

char model[5][3] =
{
	'_', '_', '_',
	'_', '_', '_',
	'A', 'T', 'K',
	'_', '_', '_',
	'_', '_', '_'
};

void SetPos(char findChar, const char* direction)
{
	int posX, posY;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (findChar == model[i][j])
			{
				posX = j;
				posY = i;
				break;
			}
		}
	}

	char temp;
	if (strcmp(direction, "UP") == 0) 
	{
		temp = model[posY - 1][posX];
		model[posY - 1][posX] = model[posY][posX];
		model[posY][posX] = temp;
	}

	if(strcmp(direction, "DOWN") == 0)
	{		
		temp = model[posY + 1][posX];
		model[posY + 1][posX] = model[posY][posX];
		model[posY][posX] = temp;

	}

	if(strcmp(direction, "LEFT") == 0) 
	{
		temp = model[posY][posX - 1];
		model[posY][posX - 1] = model[posY][posX];
		model[posY][posX] = temp;
	}

	if(strcmp(direction, "RIGHT") == 0)
	{
		temp = model[posY][posX + 1];
		model[posY][posX + 1] = model[posY][posX];
		model[posY][posX] = temp;
	}
}

void InputPos()
{
	char ch;
	char dir[10];

	cin >> ch >> dir;

	SetPos(ch, dir);
}

void PrintModel()
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << model[i][j];
		}
		cout << endl;
	}
}

int main()
{
	SetPos('A', "UP");
	SetPos('T', "DOWN");
	SetPos('K', "UP");
	SetPos('A', "RIGHT");
	SetPos('K', "UP");
	SetPos('K', "LEFT");
	SetPos('A', "LEFT");

	PrintModel();

	return 0;
}