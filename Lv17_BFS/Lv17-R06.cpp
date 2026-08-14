#include <iostream>

using namespace std;

int Gear[3][4] =
{
	3, 2, 5, 3,
	7, 6, 1, 6,
	4, 9, 2, 7,
};

void Rolling(int roll, int dx)
{
	for (int i = 0; i < roll; ++i)
	{
		int temp = Gear[2][dx];
		Gear[2][dx] = Gear[1][dx];
		Gear[1][dx] = Gear[0][dx];
		Gear[0][dx] = temp;
	}
}

int main()
{
	int roll[4] = { 1, 2, 1, 2 };

	for (int i = 0; i < 4; ++i)
	{
		Rolling(roll[i], i);
	}
	

	return 0;
}