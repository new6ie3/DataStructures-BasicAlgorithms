#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

class Solution
{
public:
	Solution(const std::vector<int>& nums)
	{
		original = nums;
		n = nums.size();
	}

	std::vector<int> reset()
	{
		return original;
	}

	std::vector<int> shuffle()
	{
		std::vector<int> shuffled = original;

		for (size_t i = n - 1; i > 0; --i)
		{
			size_t index = rand() % (i + 1);

			int temp = shuffled[i];
			shuffled[i] = shuffled[index];
			shuffled[index] = temp;
		}

		return shuffled;
	}

private:
	std::vector<int> original;
	int n;
};

int main()
{
	srand(static_cast<unsigned int>(time(NULL)));

	Solution solution({ 1, 2, 3 });
	std::vector<int> result;

	result = solution.shuffle();

	for (int num : result)
	{
		std::cout << num << ' ';
	}

	std::cout << std::endl;

	result = solution.reset();

	for (int num : result)
	{
		std::cout << num << ' ';
	}

	std::cout << std::endl;

	result = solution.shuffle();

	for (int num : result)
	{
		std::cout << num << ' ';
	}

	return 0;
}