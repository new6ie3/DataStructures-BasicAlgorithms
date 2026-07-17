#include <iostream>

using namespace std;

int number[6] = { 3, 7, 4, 0, 9, 6 };
char command[6] = { 'm', 'x', 'm', 'm', 'x', 'x' };
int x, m;
void Sort_Array()
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (number[j] < number[j + 1])
			{
				int temp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = temp;
			}
		}
	}
	
	x = 0;
	m = 5;
}

int main()
{
	Sort_Array();

	for (int i = 0; i < 6; ++i)
	{
		switch (command[i])
		{
		case 'm':
			cout << number[m];
			m--;
			break;

		case 'x':
			cout << number[x];
			x++;
			break;
		}
	}

	return 0;
}