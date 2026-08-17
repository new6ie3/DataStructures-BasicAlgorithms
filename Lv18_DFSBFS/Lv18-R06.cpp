#include <iostream>

char lock[3][5] =
{
	"AAAC",
	"ATKC",
	"ZBAB",
};

size_t counts[3] = {};
char unlock[4] = {};

void Unlock(size_t lockIdx, int level = 0)
{
	if (level == 4)
	{
		counts[lockIdx]++;
		if (std::strcmp(lock[lockIdx], unlock) == 0)
			std::cout << counts[lockIdx] << std::endl;

		return;
	}
	for (char ch = 'A'; ch <= 'Z'; ++ch)
	{
		unlock[level] = ch;
		Unlock(lockIdx, level + 1);
		unlock[level] = 0;
	}

}


int main()
{
	for (int i = 0; i < 3; ++i)
	{
		Unlock(i);
	}

	return 0;
}