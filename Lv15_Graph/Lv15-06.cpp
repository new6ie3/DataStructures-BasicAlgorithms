#include <iostream>

using namespace std;

char str[4][10] = 
{
	"ABC",
	"BBBQ",
	"BT",
	"JOW"
};

void Lower(char* str);
void Find_MaxMin_Str()
{
	size_t lens[4];
	for (size_t i = 0; i < 4; ++i)
		lens[i] = strlen(str[i]);


	size_t max_idx = 0;
	size_t min_idx = 0;
	for (size_t i = 1; i < 4; ++i)
	{
		if (lens[i] > lens[max_idx])
			max_idx = i;

		if (lens[i] < lens[min_idx])
			min_idx = i;
	}

	Lower(str[max_idx]);
	Lower(str[min_idx]);

}

void Lower(char* str)
{
	size_t i = 0;
	while (str[i] != 0)
	{
		str[i] += 32;
		i++;
	}
}

int main()
{
	for (size_t i = 0; i < 4; ++i)
		cin >> str[i];

	Find_MaxMin_Str();

	return 0;
}