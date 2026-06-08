#include <iostream>

using namespace std;

char pattern[9] = {};

struct Sketchbook
{
	char image[3][3] =
	{
		'A', 'T', 'K',
		'A', 'A', 'A',
		'T', 'T', 'G'
	};
};

void Pattern(char ch)
{
	for (int i = 0; i < 9; ++i)
	{
		if (pattern[i] == '\0' || pattern[i] == ch)
		{
			pattern[i] = ch;
			break;
		}
	}
}

void SortPattern()
{
	int i = 0;
	int j = 1;
	while (pattern[i] != '\0')
	{
		while (pattern[j] != '\0')
		{
			if (pattern[i] > pattern[j])
			{
				char temp = pattern[i];
				pattern[i] = pattern[j];
				pattern[j] = temp;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

int main()
{
	Sketchbook book;

	for (size_t i = 0; i < 3; ++i)
	{
		for (size_t j = 0; j < 3; ++j)
		{
			cin >> book.image[i][j];
			Pattern(book.image[i][j]);
		}
	}
	SortPattern();

	int i = 0;
	while (pattern[i] != '\0')
	{
		cout << pattern[i];
		i++;
	}

	return 0;
}