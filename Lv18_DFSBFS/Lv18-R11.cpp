#include <iostream>

int cubeA[3][3] =
{
	1, 1, 1,
	2, 2, 2,
	3, 3, 3,
};

int cubeB[3][3] =
{
	1, 2, 3,
	1, 2, 3,
	1, 2, 3,
};

void Input_Cube(int cube[][3])
{
	for (int y = 0; y < 3; ++y)
	{
		for (int x = 0; x < 3; ++x)
		{
			std::cin >> cube[y][x];
		}
	}
}

void Rotate_Cube_Left(int cube[][3])
{
	for (int y = 0; y < 3; ++y)
	{
		for (int x = y; x < 3; ++x)
		{
			int temp = cube[y][x];
			cube[y][x] = cube[x][y];
			cube[x][y] = temp;
		}
	}
	
	for (int x = 0; x < 3; ++x)
	{
		int temp = cube[0][x];
		cube[0][x] = cube[2][x];
		cube[2][x] = temp;
	}

}

bool Check_Cube(int cubeA[][3], int cubeB[][3])
{
	for (int y = 0; y < 3; ++y)
	{
		for (int x = 0; x < 3; ++x)
		{
			if (cubeA[y][x] != cubeB[y][x])
			{
				return false;
			}
		}
	}

	return true;
}

int main()
{
	Input_Cube(cubeA);
	Input_Cube(cubeB);

	int count = 0;
	while (!Check_Cube(cubeA, cubeB))
	{
		Rotate_Cube_Left(cubeA);
		count++;
	}

	std::cout << count;
	return 0;
}