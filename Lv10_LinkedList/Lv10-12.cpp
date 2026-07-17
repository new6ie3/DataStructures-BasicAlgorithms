#include <iostream>

using namespace std;

int str[15] = 
{
	0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1
};

void Print_Array(int ary[5])
{
	for (int i = 0; i < 5; ++i)
	{
		cout << ary[i];
	}
	cout << endl;
}

int main()
{
	int A[5], B[5], C[5];

	for (int i = 0; i < 15; ++i)
	{
		switch (i / 5)
		{
		case 0:
			A[i % 5] = str[i];
			break;

		case 1:
			B[i % 5] = str[i];
			break;

		case 2:
			C[i % 5] = str[i];
			break;
		}
	}

	Print_Array(A);
	Print_Array(B);
	Print_Array(C);

	
	return 0;
}