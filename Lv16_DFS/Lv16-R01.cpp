#include <iostream>
#include <vector>

struct Set
{
	char word;
	int num;
};

void SortVec(std::vector<Set>& sets)
{
    for (size_t i = 0; i < sets.size(); ++i)
    {
        for (size_t j = i + 1; j < sets.size(); ++j)
        {
            if (sets[i].word > sets[j].word)
            {
                Set temp = sets[i];
                sets[i] = sets[j];
                sets[j] = temp;
            }
            else if (sets[i].word == sets[j].word &&
                sets[i].num > sets[j].num)
            {
                Set temp = sets[i];
                sets[i] = sets[j];
                sets[j] = temp;
            }
        }
    }

    for (size_t i = 0; i < sets.size(); ++i)
    {
        std::cout << sets[i].word << ' ' << sets[i].num << std::endl;
    }
}

int main()
{
    int size;
    std::cin >> size;
    std::vector<Set> sets;

    for (size_t i = 0; i < size; ++i)
    {
        Set input;
        std::cin >> input.word >> input.num;

        sets.push_back(input);
    }

	SortVec(sets);


	return 0;
}