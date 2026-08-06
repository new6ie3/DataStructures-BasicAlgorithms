#include <iostream>

using namespace std;

int ary[3][3] =
{
	3, 5, 1,
	9, 2, 7,
	6, 11, 3
};

int first = 0;
int second = 0;
void Print_FirstMax_SecondMax()
{
	for (size_t i = 0; i < 9; ++i)
	{
		if (ary[i / 3][i % 3] > ary[first / 3][first % 3])
		{
			second = first;
			first = (i / 3 * 3) + (i % 3);
		}
	}

	cout << "첫번째:" << ary[first / 3][first % 3] << '(' << (first / 3) << ',' << (first % 3) << ')' << endl;
	cout << "두번째:" << ary[second / 3][second % 3] << '(' << (second / 3) << ',' << (second % 3) << ')' << endl;
}

int main()
{
	Print_FirstMax_SecondMax();

	return 0;
}