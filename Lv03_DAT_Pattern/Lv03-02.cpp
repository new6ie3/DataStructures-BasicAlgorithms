#include <iostream>

using namespace std;

int entryRecords[3][4] =
{
	65000, 35, 42, 70,
	70, 35, 65000, 1300,
	65000, 30000, 38, 42
};

int entryId[70000] = {};

int MaxEntryId()
{
	int maxIdx = -1;
	int maxEntry = INT_MIN;

	for (size_t i = 0; i < 70000; ++i)
	{
		if (entryId[i] != 0 && maxEntry < entryId[i])
		{
			maxEntry = entryId[i];
			maxIdx = i;
		}
	}

	return maxIdx;
}

int main()
{
	for (size_t i = 0; i < 3; ++i)
	{
		for (size_t j = 0; j < 4; ++j)
		{
			entryId[entryRecords[i][j]]++;
		}
	}

	int result = MaxEntryId();
	cout << result << endl;

	return 0;
}