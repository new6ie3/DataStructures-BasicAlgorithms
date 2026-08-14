#include <iostream>

using namespace std;

int ary1[4] = { 10, 3, 5, 9 };
int ary2[4] = { 2, 6, 11, 9 };
int result[8] = {};

void Input_Ary(int* ary)
{
	for (int i = 0; i < 4; ++i)
	{
		cin >> ary[i];
	}
}

void Sort_Ary(int* ary)
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = i; j < 3; ++j)
		{
			if (ary[j] > ary[j + 1])
			{
				int temp = ary[j + 1];
				ary[j + 1] = ary[j];
				ary[j] = temp;
			}
		}
	}
}

void MergeSort_Array(int* ary1, int* ary2)
{
	int p1 = 0;
	int p2 = 0;
	int rp = 0;

	while (p1 < 4 && p2 < 4)
	{
		if (ary1[p1] < ary2[p2])
		{
			result[rp] = ary1[p1];
			p1++;
		}
		else
		{
			result[rp] = ary2[p2];
			p2++;
		}

		rp++;
	}

	while (p1 < 4)
	{
		result[rp] = ary1[p1];
		p1++;
		rp++;
	}

	while (p2 < 4)
	{
		result[rp] = ary2[p2];
		p2++;
		rp++;
	}
}

int main()
{
	Input_Ary(ary1);
	Input_Ary(ary2);

	Sort_Ary(ary1);
	Sort_Ary(ary2);
	MergeSort_Array(ary1, ary2);

	return 0;
}