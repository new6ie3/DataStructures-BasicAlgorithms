#include <iostream>

using namespace std;

int arrayA[4] = {1, 3, 3, 7};
int arrayB[4] = {2, 3, 4, 6};
int arrayC[8] = {};

int main()
{
	int idxA = 0;
	int idxB = 0;
	for (int i = 0; i < 8; ++i)
	{
		if (arrayA[idxA] < arrayB[idxB] || idxB >= 4)
		{
			arrayC[i] = arrayA[idxA];
			idxA++;
		}
		else if(arrayA[idxA] >= arrayB[idxB] || idxA >= 4)
		{
			arrayC[i] = arrayB[idxB];
			idxB++;
		}
	}

	return 0;
}